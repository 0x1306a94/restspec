use super::generator::Generator;
use tree_sitter::Node;

pub struct JavaGenerator {}

impl JavaGenerator {
    pub fn new() -> Self {
        JavaGenerator {}
    }
}

impl Generator for JavaGenerator {
    fn generate_enum_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        todo!()
    }

    fn generate_enum_options_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        todo!()
    }

    fn generate_class_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        todo!()
    }
}
