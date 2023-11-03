use tree_sitter::Node;

use crate::option;

pub trait Generator {
    fn generate_enum_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<String, String>;
    fn generate_enum_options_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<String, String>;
    fn generate_class_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<String, String>;
}
