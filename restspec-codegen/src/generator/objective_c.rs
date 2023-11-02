use super::generator::Generator;
use tree_sitter::Node;

use lazy_static::*;
use std::cell::RefCell;
use std::collections::HashMap;
enum AssociationPolicy {
    Assign,
    RetainNonAtomic,
    CopyNonAtomic,
    Retain,
    Copy,
}

impl ToString for AssociationPolicy {
    fn to_string(&self) -> String {
        match &self {
            AssociationPolicy::Assign => "nonatomic, assign".to_owned(),
            AssociationPolicy::RetainNonAtomic => "nonatomic, strong".to_owned(),
            AssociationPolicy::CopyNonAtomic => "nonatomic, copy".to_owned(),
            AssociationPolicy::Retain => "atomic, strong".to_owned(),
            AssociationPolicy::Copy => "atomic, copy".to_owned(),
        }
    }
}

struct PropertyInfo(String, AssociationPolicy, bool);

lazy_static! {
    static ref STANDARD_TYPE_MAP: HashMap<String, PropertyInfo> = {
        let mut map = HashMap::new();
        map.insert(
            "Bool".to_owned(),
            PropertyInfo("BOOL".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "String".to_owned(),
            PropertyInfo(
                "NSString *".to_owned(),
                AssociationPolicy::CopyNonAtomic,
                true,
            ),
        );
        map.insert(
            "Double".to_owned(),
            PropertyInfo("double".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Float".to_owned(),
            PropertyInfo("float".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Int".to_owned(),
            PropertyInfo("NSInteger".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Int8".to_owned(),
            PropertyInfo("int8_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Int16".to_owned(),
            PropertyInfo("int16_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Int32".to_owned(),
            PropertyInfo("int32_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "Int64".to_owned(),
            PropertyInfo("int64_t".to_owned(), AssociationPolicy::Assign, false),
        );

        map.insert(
            "UInt".to_owned(),
            PropertyInfo("NSUInteger".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "UInt8".to_owned(),
            PropertyInfo("uint8_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "UInt16".to_owned(),
            PropertyInfo("uint16_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "UInt32".to_owned(),
            PropertyInfo("uint32_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map.insert(
            "UInt64".to_owned(),
            PropertyInfo("uint64_t".to_owned(), AssociationPolicy::Assign, false),
        );
        map
    };
}

struct CustomTypeInfo(AssociationPolicy, bool);

pub struct ObjectiveCGenerator {
    custom_type_map: RefCell<HashMap<String, CustomTypeInfo>>,
}

impl ObjectiveCGenerator {
    pub fn new() -> Self {
        ObjectiveCGenerator {
            custom_type_map: RefCell::new(HashMap::new()),
        }
    }
}

impl Generator for ObjectiveCGenerator {
    fn generate_enum_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        let enum_name = node
            .child(1)
            .expect("Failed to get child node")
            .utf8_text(source_code.as_bytes())
            .expect("fail text");

        let mut generated_code = String::new(); //format!("enum {} {{\n", enum_name);
        generated_code.push_str(&format!("#ifndef {}_h\n", enum_name));
        generated_code.push_str(&format!("#define {}_h\n\n", enum_name));
        generated_code.push_str("#import <Foundation/Foundation.h>\n\n");
        generated_code.push_str(&format!("typedef NS_ENUM(NSInteger, {}) {{\n", enum_name));
        if node.child_count() >= 5 {
            for idx in 3..(node.child_count() - 1) {
                let case_node = node.child(idx).expect("fail case node");

                let case_name = case_node
                    .child(0)
                    .expect("fail case name node")
                    .utf8_text(source_code.as_bytes())
                    .expect("fail get text");

                match case_node.child_count() {
                    4 => {
                        let case_value = case_node
                            .child(2)
                            .expect("fail case value node")
                            .utf8_text(source_code.as_bytes())
                            .expect("fail get text");
                        generated_code += &format!("\t{} = {};\n", case_name, case_value);
                    }
                    _ => {
                        generated_code += &format!("\t{} = 0;\n", case_name);
                    }
                }
            }
        }
        generated_code += "};\n\n";
        generated_code.push_str(&format!("#endif /* {}_h */\n", enum_name));

        self.custom_type_map.borrow_mut().insert(
            enum_name.to_string(),
            CustomTypeInfo(AssociationPolicy::Assign, false),
        );
        Ok(generated_code)
    }

    fn generate_enum_options_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        let enum_name = node
            .child(1)
            .expect("Failed to get child node")
            .utf8_text(source_code.as_bytes())
            .expect("fail text");

        let mut generated_code = String::new();
        generated_code.push_str(&format!("#ifndef {}_h\n", enum_name));
        generated_code.push_str(&format!("#define {}_h\n\n", enum_name));
        generated_code.push_str("#import <Foundation/Foundation.h>\n\n");
        generated_code.push_str(&format!(
            "typedef NS_OPTIONS(NSUInteger, {}) {{\n",
            enum_name
        ));
        if node.child_count() >= 5 {
            for idx in 3..(node.child_count() - 1) {
                let case_node = node.child(idx).expect("fail case node");

                let case_name = case_node
                    .child(0)
                    .expect("fail case name node")
                    .utf8_text(source_code.as_bytes())
                    .expect("fail get text");

                match case_node.child_count() {
                    4 => {
                        let case_value = case_node
                            .child(2)
                            .expect("fail case value node")
                            .utf8_text(source_code.as_bytes())
                            .expect("fail get text");
                        generated_code += &format!("\t{} = {};\n", case_name, case_value);
                    }
                    6 => {
                        let base_value = case_node
                            .child(2)
                            .expect("fail case base value node")
                            .utf8_text(source_code.as_bytes())
                            .expect("fail get text");

                        let shift_value = case_node
                            .child(4)
                            .expect("fail case shift value node")
                            .utf8_text(source_code.as_bytes())
                            .expect("fail get text");
                        generated_code +=
                            &format!("\t{} = {} << {};\n", case_name, base_value, shift_value);
                    }
                    _ => {
                        generated_code += &format!("\t{} = 0;\n", case_name);
                    }
                }
            }
        }
        generated_code += "};\n\n";
        generated_code.push_str(&format!("#endif /* {}_h */\n", enum_name));

        self.custom_type_map.borrow_mut().insert(
            enum_name.to_string(),
            CustomTypeInfo(AssociationPolicy::Assign, false),
        );

        Ok(generated_code)
    }

    fn generate_class_code(&self, source_code: &str, node: &Node) -> Result<String, String> {
        let class_name = node
            .child(1)
            .expect("Failed to get child node")
            .utf8_text(source_code.as_bytes())
            .expect("fail text");

        let mut generated_code = String::new();
        generated_code.push_str(&format!("#ifndef {}_h\n", class_name));
        generated_code.push_str(&format!("#define {}_h\n\n", class_name));
        generated_code.push_str("#import <Foundation/Foundation.h>\n\n");
        generated_code.push_str("NS_ASSUME_NONNULL_BEGIN\n\n");
        generated_code.push_str(&format!("@interface {} : NSObject\n", class_name));

        if node.child_count() >= 5 {
            for idx in 3..(node.child_count() - 1) {
                let field_node = node.child(idx).expect("fail get filed node");

                let type_idx: usize = 0;
                let name_idx: usize = match field_node.child_count() {
                    4 => 2,
                    _ => 1,
                };
                let optional = name_idx == 2;

                let type_name = field_node
                    .child(type_idx)
                    .expect("fail type node")
                    .utf8_text(source_code.as_bytes())
                    .expect("text");

                let field_name = field_node
                    .child(name_idx)
                    .expect("fail type node")
                    .utf8_text(source_code.as_bytes())
                    .expect("text");

                match (*STANDARD_TYPE_MAP).get(type_name) {
                    Some(value) => {
                        let mut optional_code = String::new();
                        if value.2 && optional {
                            optional_code.push_str(" ,nullable");
                        }
                        let blank = match value.1 {
                            AssociationPolicy::Assign => " ",
                            _ => "",
                        };
                        generated_code.push_str(&format!(
                            "@property ({}{}) {}{}{};\n",
                            value.1.to_string(),
                            optional_code,
                            value.0,
                            blank,
                            field_name
                        ));
                    }
                    None => match self.custom_type_map.borrow().get(type_name) {
                        Some(value) => {
                            let mut optional_code = String::new();
                            if value.1 && optional {
                                optional_code.push_str(" ,nullable");
                            }

                            let final_type = match value.0 {
                                AssociationPolicy::Assign => format!("{} ", type_name),
                                _ => format!("{} *", type_name),
                            };

                            generated_code.push_str(&format!(
                                "@property ({}{}) {}{};\n",
                                value.0.to_string(),
                                optional_code,
                                final_type,
                                field_name
                            ));
                        }
                        None => {
                            panic!("Type {} not found", type_name);
                        }
                    },
                }
            }
        }

        generated_code += "@end\n\nNS_ASSUME_NONNULL_END\n";
        generated_code.push_str(&format!("#endif /* {}_h */\n", class_name));

        self.custom_type_map.borrow_mut().insert(
            class_name.to_string(),
            CustomTypeInfo(AssociationPolicy::RetainNonAtomic, true),
        );

        Ok(generated_code)
    }
}
