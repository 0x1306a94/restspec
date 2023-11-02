use tree_sitter::{Node, Parser};
use tree_sitter_restspec;

pub mod kind;

pub fn parse(source_code: &str) {
    let mut parser = Parser::new();
    parser
        .set_language(tree_sitter_restspec::language())
        .expect("Error setting language");

    let tree = parser
        .parse(source_code, None)
        .expect("Error parsing source code");
    println!("tree {:?}", tree);

    traverse_tree(&tree.root_node());
}

fn traverse_tree(node: &Node) {
    if node.kind() == "ERROR" {
        println!("Error message: {:?}", node.to_sexp());
        return;
    }
    println!("kind: {}", node.kind());
    for idx in 0..node.child_count() {
        let child_node = node.child(idx).expect("Failed to get child node");
        traverse_tree(&child_node);
    }
}
