#![allow(dead_code)]

use std::cell::RefCell;
use std::collections::HashMap;
use std::fs;
use std::path::PathBuf;

use tree_sitter::{Node, Parser, Tree};

use crate::generator::{Generator, JavaGenerator, ObjectiveCGenerator};
use crate::language::Language;
use crate::util;
use crate::DependencyGraph;
use crate::{kind, option};

struct AstTree(String, Tree);

pub struct Context {
    language: Language,
    files: Vec<PathBuf>,
    include_dir: PathBuf,
    output_dir: PathBuf,
    generator: Box<dyn Generator>,
    dg: RefCell<DependencyGraph>,
    tree_map: RefCell<HashMap<String, AstTree>>,
    parser: RefCell<Parser>,
}

impl Context {
    fn build_dependency_graph(&self) {
        for file_path in &self.files {
            let full_path = util::absolute_path(file_path);
            let source_code = fs::read_to_string(&full_path)
                .expect(&format!("read source code fail: {:?}", &full_path));

            let tree = self
                .parser
                .borrow_mut()
                .parse(&source_code, None)
                .expect("Error parsing source code");
            let root_node = tree.root_node();
            if root_node.kind() != kind::SOURCE_FILE {
                eprintln!("The syntax declaration is missing from the source file");
                return;
            }

            let full_path_str = full_path.to_str().unwrap();

            let child_count = root_node.child_count();
            for idx in 0..child_count {
                let child_node = root_node.child(idx).expect("fail get child node");
                if child_node.kind() != kind::IMPORT_DECLARATION {
                    continue;
                }

                let path = child_node
                    .child(1)
                    .unwrap()
                    .utf8_text(source_code.as_bytes())
                    .unwrap()
                    .replace('"', "");

                let import_path = self.include_dir.clone().join(path);
                self.dg
                    .borrow_mut()
                    .add_dependency(full_path_str, import_path.to_str().unwrap());
            }

            self.tree_map
                .borrow_mut()
                .insert(full_path_str.to_string(), AstTree(source_code, tree));
        }
    }

    fn codegen(&self) {
        match self.dg.borrow().topological_sort() {
            Some(ref orders) => {
                for file in orders {
                    println!("Processing file: {}", file);
                    if let Some(value) = self.tree_map.borrow().get(file) {
                        let option_cache = option::cache::Cache::new();
                        self.visit_node(&value.0, &value.1.root_node(), &option_cache);
                    }
                }
            }
            _ => {
                panic!("存在循环依赖,请检查代码")
            }
        }
    }

    fn visit_node(&self, source_code: &str, node: &Node, option_cache: &option::cache::Cache) {
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
            kind::ENUM_DECLARATION => {
                let codes = self
                    .generator
                    .generate_enum_code(source_code, node, option_cache)
                    .expect("fail generate_enum_code");
                // println!("enum code: \n{}", codes[0].get_code());
                util::write_to_file(&self.output_dir, &codes);
            }
            kind::ENUM_OPTION_DECLARATION => {
                let codes = self
                    .generator
                    .generate_enum_options_code(source_code, node, option_cache)
                    .expect("fail generate_enum_code");
                // println!("eunm options code: \n{}", codes[0].get_code());
                util::write_to_file(&self.output_dir, &codes);
            }
            kind::MESSAGE_DECLARATION => {
                let codes = self
                    .generator
                    .generate_class_code(source_code, node, option_cache)
                    .expect("fail generate_enum_code");
                // println!("class code: \n{}", codes[0].get_code());
                util::write_to_file(&self.output_dir, &codes);
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
            self.visit_node(source_code, &child_node, option_cache);
        }
    }
}

impl Context {
    pub fn new(
        language: Language,
        files: Vec<PathBuf>,
        include_dir: PathBuf,
        output_dir: PathBuf,
    ) -> Self {
        let generator: Box<dyn Generator> = match language {
            Language::ObjectiveC => Box::new(ObjectiveCGenerator::new()),
            Language::Java => Box::new(JavaGenerator::new()),
        };

        let mut parser = Parser::new();
        parser
            .set_language(tree_sitter_restspec::language())
            .expect("Error setting language");

        Context {
            language,
            files,
            include_dir,
            output_dir,
            generator,
            tree_map: RefCell::new(HashMap::new()),
            parser: RefCell::new(parser),
            dg: RefCell::new(DependencyGraph::new()),
        }
    }

    pub fn gen_code(&self) {
        self.build_dependency_graph();
        self.codegen();
    }
}
