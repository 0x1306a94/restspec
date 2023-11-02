use tree_sitter::{Node, Parser};

pub mod kind;

pub mod language;
pub use language::Language;

pub mod generator;

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
    let mut generator: Box<dyn generator::Generator> = match language {
        Language::ObjectiveC => Box::new(generator::ObjectiveCGenerator::new()),
        _ => {
            panic!("pass");
        }
    };
    visit_node(source_code, &tree.root_node(), &mut generator);
}

fn visit_node(source_code: &str, node: &Node, generator: &mut Box<dyn generator::Generator>) {
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
