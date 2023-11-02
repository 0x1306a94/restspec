use tree_sitter::Node;

pub trait Generator {
    fn generate_enum_code(&mut self, source_code: &str, node: &Node) -> Result<String, String>;
    fn generate_enum_options_code(
        &mut self,
        source_code: &str,
        node: &Node,
    ) -> Result<String, String>;
    fn generate_class_code(&mut self, source_code: &str, node: &Node) -> Result<String, String>;
}
