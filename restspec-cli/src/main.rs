use restspec_codegen;

fn main() {
    let source_code = include_str!("../../samples/test.restspec");
    restspec_codegen::generate_code(
        source_code,
        restspec_codegen::language::Language::ObjectiveC,
    );
}
