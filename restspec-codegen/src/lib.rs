use tree_sitter::{Node, Parser};

pub mod kind;

pub mod language;
pub use language::Language;
pub mod generator;
pub use generator::{Generator, JavaGenerator, ObjectiveCGenerator};

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

    let generator: Box<dyn Generator> = match language {
        Language::ObjectiveC => Box::new(ObjectiveCGenerator::new()),
        Language::Java => Box::new(JavaGenerator::new()),
    };
    visit_node(source_code, &tree.root_node(), &generator);
}

fn visit_node(source_code: &str, node: &Node, generator: &Box<dyn Generator>) {
    match node.kind() {
        kind::IMPORT_DECLARATION => {
            println!("import pass");
        }
        kind::ENUM_DECLARATION => {
            let code = generator
                .generate_enum_code(source_code, node)
                .expect("fail generate_enum_code");
            println!("enum code: \n\n{}", code);
        }
        kind::ENUM_OPTION_DECLARATION => {
            let code = generator
                .generate_enum_options_code(source_code, node)
                .expect("fail generate_enum_code");
            println!("eunm options code: \n\n{}", code);
        }
        kind::MESSAGE_DECLARATION => {
            let code = generator
                .generate_class_code(source_code, node)
                .expect("fail generate_enum_code");
            println!("class code: \n\n{}", code);
        }
        _ => {}
    }

    for idx in 0..node.child_count() {
        let child_node = node.child(idx).expect("fail get child node");
        visit_node(source_code, &child_node, generator);
    }
}
