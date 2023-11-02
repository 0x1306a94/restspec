use super::generator::Generator;
use tree_sitter::Node;

pub struct AnyGenerator<'a> {
    inner: Box<dyn Generator + 'a>,
}

impl<'a> AnyGenerator<'a> {
    pub fn new<T: Generator + 'a>(imp: T) -> Self {
        AnyGenerator {
            inner: Box::new(imp),
        }
    }
}

impl<'a> Generator for AnyGenerator<'a> {
    fn generate_enum_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        self.inner.generate_enum_code(source_code, node)
    }

    fn generate_enum_options_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        self.inner.generate_enum_options_code(source_code, node)
    }

    fn generate_class_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        self.inner.generate_class_code(source_code, node)
    }
}
