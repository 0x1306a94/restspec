use restspec_parser;

fn main() {
    let source_code = include_str!("../../samples/test.restspec");
    restspec_parser::parse(source_code);

    println!("kind: {}", restspec_parser::kind::SOURCE_FILE);
}
