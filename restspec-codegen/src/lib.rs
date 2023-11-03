use tree_sitter::{Node, Parser};

pub mod kind;

pub mod language;
pub use language::Language;
pub mod generator;
pub use generator::{Generator, JavaGenerator, ObjectiveCGenerator};

mod option;
pub fn generate_code(source_code: &str, language: Language) {
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
    println!("{}", tree.root_node().to_sexp());

    let option_cache = option::cache::Cache::new();

    let generator: Box<dyn Generator> = match language {
        Language::ObjectiveC => Box::new(ObjectiveCGenerator::new()),
        Language::Java => Box::new(JavaGenerator::new()),
    };
    visit_node(source_code, &tree.root_node(), &generator, &option_cache);
}

fn visit_node(
    source_code: &str,
    node: &Node,
    generator: &Box<dyn Generator>,
    option_cache: &option::cache::Cache,
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
            println!("option: {}={}", name, value);
        }
        kind::IMPORT_DECLARATION => {
            let path = node
                .child(1)
                .unwrap()
                .utf8_text(source_code.as_bytes())
                .unwrap();
            println!("import path: {}", path);
        }
        kind::ENUM_DECLARATION => {
            let code = generator
                .generate_enum_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            println!("enum code: \n\n{}", code);
        }
        kind::ENUM_OPTION_DECLARATION => {
            let code = generator
                .generate_enum_options_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            println!("eunm options code: \n\n{}", code);
        }
        kind::MESSAGE_DECLARATION => {
            let code = generator
                .generate_class_code(source_code, node, option_cache)
                .expect("fail generate_enum_code");
            println!("class code: \n\n{}", code);
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
        visit_node(source_code, &child_node, generator, option_cache);
    }
}
