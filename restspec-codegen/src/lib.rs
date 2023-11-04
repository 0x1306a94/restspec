use std::collections::HashSet;
use std::fs;
use std::fs::OpenOptions;
use std::io::prelude::*;
use std::path::{Path, PathBuf};
use std::sync::Mutex;

use generator::generator::GeneratedCode;
use lazy_static::*;
use tree_sitter::{Node, Parser};

pub mod kind;

pub mod language;
pub use language::Language;
pub mod generator;
pub use generator::{Generator, JavaGenerator, ObjectiveCGenerator};

mod option;

lazy_static! {
    static ref IMPORT_PROCESSED_SET: Mutex<HashSet<String>> = {
        let set = HashSet::new();
        Mutex::new(set)
    };
}

pub fn generate_code(
    source_code: &str,
    language: &Language,
    include_dir: &PathBuf,
    output_dir: &PathBuf,
    current_file_path: &PathBuf,
) {
    let mut parser = Parser::new();
    parser
        .set_language(tree_sitter_restspec::language())
        .expect("Error setting language");

    let tree = parser
        .parse(source_code, None)
        .expect("Error parsing source code");
    if tree.root_node().kind() != kind::SOURCE_FILE {
        eprintln!("The syntax declaration is missing from the source file");
        return;
    }
    println!(
        "\nfile:{}\nsexp:\n{}\n\n",
        current_file_path.to_str().unwrap(),
        tree.root_node().to_sexp()
    );

    let option_cache = option::cache::Cache::new();

    let generator: Box<dyn Generator> = match language {
        Language::ObjectiveC => Box::new(ObjectiveCGenerator::new()),
        Language::Java => Box::new(JavaGenerator::new()),
    };
    visit_node(
        source_code,
        language,
        &tree.root_node(),
        &generator,
        &option_cache,
        include_dir,
        output_dir,
        current_file_path,
    );
}

fn visit_node(
    source_code: &str,
    language: &Language,
    node: &Node,
    generator: &Box<dyn Generator>,
    option_cache: &option::cache::Cache,
    include_dir: &PathBuf,
    output_dir: &PathBuf,
    current_file_path: &PathBuf,
) {
    match node.kind() {
        kind::OPTION_DECLARATION => {
            let name = node
                .child(1)
                .unwrap()
                .utf8_text(source_code.as_bytes())
                .unwrap();
            let value = node
                .child(3)
                .unwrap()
                .utf8_text(source_code.as_bytes())
                .unwrap();

            option_cache.set(&name, &value);
            // println!("option: {}={}", name, value);
        }
        kind::IMPORT_DECLARATION => {
            let path = node
                .child(1)
                .unwrap()
                .utf8_text(source_code.as_bytes())
                .unwrap()
                .replace('"', "");

            let path = include_dir.clone().join(path);

            if current_file_path == &path {
                panic!("Import into oneself")
            }
            if !path.exists() {
                panic!("{:?} not exists", &path);
            }
            let path_str = path.as_path().to_str().unwrap();
            let mut processed_set = IMPORT_PROCESSED_SET.lock().unwrap();
            if !processed_set.contains(path_str) {
                println!("import path: {path_str}");
                let source_code = fs::read_to_string(&path)
                    .expect(&format!("read source code fail: {:?}", &path));
                generate_code(&source_code, language, include_dir, output_dir, &path);
                // 标记已处理过
                processed_set.insert(path_str.to_owned());
            } else {
                println!("import path skip: {path_str}");
            }
        }
        kind::ENUM_DECLARATION => {
            let codes = generator
                .generate_enum_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            // println!("enum code: \n{}", codes[0].get_code());
            write_to_file(output_dir, &codes);
        }
        kind::ENUM_OPTION_DECLARATION => {
            let codes = generator
                .generate_enum_options_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            // println!("eunm options code: \n{}", codes[0].get_code());
            write_to_file(output_dir, &codes);
        }
        kind::MESSAGE_DECLARATION => {
            let codes = generator
                .generate_class_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            // println!("class code: \n{}", codes[0].get_code());
            write_to_file(output_dir, &codes);
        }
        kind::ERROR => {
            panic!(
                "Syntax error: {}",
                node.utf8_text(source_code.as_bytes()).unwrap()
            );
        }
        _ => {}
    }

    for idx in 0..node.child_count() {
        let child_node = node.child(idx).expect("fail get child node");
        visit_node(
            source_code,
            language,
            &child_node,
            generator,
            option_cache,
            include_dir,
            output_dir,
            current_file_path,
        );
    }
}

fn ensure_parent_directory_exists(file_path: impl AsRef<Path>) -> Result<(), std::io::Error> {
    if let Some(parent_dir) = file_path.as_ref().parent() {
        fs::create_dir_all(parent_dir)?;
    }
    Ok(())
}

fn write_to_file(output_dir: &PathBuf, codes: &Vec<GeneratedCode>) {
    for item in codes {
        let path = output_dir.clone().join(item.get_name());
        ensure_parent_directory_exists(&path).expect(&format!(
            "Unable to create directory {:?}",
            &path.parent().unwrap()
        ));
        let mut file = OpenOptions::new()
            .create(true)
            .truncate(true)
            .write(true)
            .open(&path)
            .expect(&format!("Unable to create file {:?}", &path));
        file.write_all(item.get_code().as_bytes()).unwrap();
    }
}
