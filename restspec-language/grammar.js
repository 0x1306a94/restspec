module.exports = grammar({
  name: "restspec",
  extras: ($) => [$.comment, /\s/],
  rules: {
    // top
    source_file: ($) =>
      seq(
        $.syntax_declaration,
        repeat($.option_declaration),
        repeat($.import_declaration),
        repeat($._declaration)
      ),
    // syntax
    syntax_declaration: ($) => seq($.syntax_keyword, "=", '"restspec1"', ";"),
    // import
    import_declaration: ($) => seq($.import_keyword, $.string_literals, ";"),
    // option
    option_declaration: ($) =>
      seq(
        $.option_keyword,
        $.identifier,
        "=",
        choice($.string_literals, $.boolean_literal, $.integer_literal),
        ';'
      ),

    // comment
    comment: ($) =>
      token(
        choice(
          // Single-line comments (including documentation comments)
          seq(/\/{2,3}[^/].*/),
          // Multiple-line comments (including documentation comments).
          seq(/\/\*{1,}[^*]*\*+([^/*][^*]*\*+)*\//)
        )
      ),
    // identifier
    identifier: ($) => {
      const _identifier_head = /[A-Za-z_]/;
      const _identifier_characters = repeat(choice(_identifier_head, /[0-9]/));
      return token(
        choice(seq(_identifier_head, optional(_identifier_characters)))
      );
    },

    integer_literal: ($) =>
      token(choice(/[0-9]+/, seq(choice("0x", "0X"), /[0-9a-fA-F]+/))),

    // boolean literals
    boolean_literal: ($) => choice("true", "false"),

    // string literals
    string_literals: ($) =>
      choice(
        seq(
          '"',
          /([^"\n\\]|\\[xX][\da-fA-F]{2}|\\[0-7]{3}|\\[abfnrtv\\'"])*/,
          '"'
        ),
        seq(
          "'",
          /([^'\n\\]|\\[xX][\da-fA-F]{2}|\\[0-7]{3}|\\[abfnrtv\\'"])*/,
          "'"
        )
      ),

    // keyword
    syntax_keyword: ($) => token("syntax"),
    import_keyword: ($) => token("import"),
    enum_keyword: ($) => token("enum"),
    enum_option_keyword: ($) => token("enum_option"),
    message_keyword: ($) => token("message"),
    option_keyword: ($) => token("option"),
    builtin_keyword: ($) =>
      choice(
        $.syntax_keyword,
        $.import_keyword,
        $.enum_keyword,
        $.enum_option_keyword,
        $.message_keyword,
        $.option_keyword
      ),
    // standard type
    standard_type: ($) =>
      token(
        choice(
          "Bool",
          "String",
          "Double",
          "Float",
          "Int",
          "UInt",
          ...[8, 16, 32, 64].map((n) => `UInt${n}`),
          ...[8, 16, 32, 64].map((n) => `Int${n}`)
        )
      ),
    type_specifier: ($) => choice($.standard_type, $.identifier),

    // declarations
    _declaration: ($) =>
      choice(
        $.enum_declaration,
        $.enum_option_declaration,
        $.message_declaration
      ),

    // enum
    enum_declaration: ($) =>
      seq(
        $.enum_keyword,
        $.identifier,
        "{",
        repeat($.enum_case_declaration),
        "}"
      ),
    enum_case_declaration: ($) =>
      seq($.identifier, optional(seq("=", $.integer_literal)), ";"),

    enum_option_declaration: ($) =>
      seq(
        $.enum_option_keyword,
        $.identifier,
        "{",
        repeat($.enum_option_case_declaration),
        "}"
      ),
    enum_option_case_declaration: ($) =>
      seq(
        $.identifier,
        "=",
        choice(
          $.integer_literal,
          seq($.integer_literal, "<<", $.integer_literal)
        ),
        ";"
      ),

    // message
    message_declaration: ($) =>
      seq($.message_keyword, $.identifier, "{", repeat($.message_field), "}"),
    message_field: ($) =>
      seq(seq($.type_specifier, optional("?")), $.identifier, ";"),
  },
});
