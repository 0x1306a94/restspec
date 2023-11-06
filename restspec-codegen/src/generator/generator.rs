use tree_sitter::Node;

use crate::option;

pub(crate) struct GeneratedCode {
    name: String,
    code: String,
}

impl GeneratedCode {
    pub(crate) fn new(name: &str, code: &str) -> Self {
        GeneratedCode {
            name: name.to_owned(),
            code: code.to_string(),
        }
    }

    pub(crate) fn get_name(&self) -> String {
        self.name.clone()
    }

    pub(crate) fn get_code(&self) -> String {
        self.code.clone()
    }
}

pub(crate) trait Generator {
    fn generate_enum_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<Vec<GeneratedCode>, String>;
    fn generate_enum_options_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<Vec<GeneratedCode>, String>;
    fn generate_class_code(
        &self,
        source_code: &str,
        node: &Node,
        option_cache: &option::cache::Cache,
    ) -> Result<Vec<GeneratedCode>, String>;
}
