#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_DQUOTErestspec1_DQUOTE = 2,
  anon_sym_SEMI = 3,
  sym_comment = 4,
  sym_identifier = 5,
  sym_integer_literal = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_literals_token1 = 10,
  anon_sym_SQUOTE = 11,
  aux_sym_string_literals_token2 = 12,
  sym_syntax_keyword = 13,
  sym_import_keyword = 14,
  sym_enum_keyword = 15,
  sym_enum_option_keyword = 16,
  sym_message_keyword = 17,
  sym_option_keyword = 18,
  sym_standard_type = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_LT_LT = 22,
  anon_sym_QMARK = 23,
  sym_source_file = 24,
  sym_syntax_declaration = 25,
  sym_import_declaration = 26,
  sym_option_declaration = 27,
  sym_boolean_literal = 28,
  sym_string_literals = 29,
  sym_type_specifier = 30,
  sym__declaration = 31,
  sym_enum_declaration = 32,
  sym_enum_case_declaration = 33,
  sym_enum_option_declaration = 34,
  sym_enum_option_case_declaration = 35,
  sym_message_declaration = 36,
  sym_message_field = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_source_file_repeat2 = 39,
  aux_sym_source_file_repeat3 = 40,
  aux_sym_enum_declaration_repeat1 = 41,
  aux_sym_enum_option_declaration_repeat1 = 42,
  aux_sym_message_declaration_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTErestspec1_DQUOTE] = "\"restspec1\"",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literals_token1] = "string_literals_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literals_token2] = "string_literals_token2",
  [sym_syntax_keyword] = "syntax_keyword",
  [sym_import_keyword] = "import_keyword",
  [sym_enum_keyword] = "enum_keyword",
  [sym_enum_option_keyword] = "enum_option_keyword",
  [sym_message_keyword] = "message_keyword",
  [sym_option_keyword] = "option_keyword",
  [sym_standard_type] = "standard_type",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_QMARK] = "\?",
  [sym_source_file] = "source_file",
  [sym_syntax_declaration] = "syntax_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_option_declaration] = "option_declaration",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literals] = "string_literals",
  [sym_type_specifier] = "type_specifier",
  [sym__declaration] = "_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_case_declaration] = "enum_case_declaration",
  [sym_enum_option_declaration] = "enum_option_declaration",
  [sym_enum_option_case_declaration] = "enum_option_case_declaration",
  [sym_message_declaration] = "message_declaration",
  [sym_message_field] = "message_field",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym_enum_option_declaration_repeat1] = "enum_option_declaration_repeat1",
  [aux_sym_message_declaration_repeat1] = "message_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTErestspec1_DQUOTE] = anon_sym_DQUOTErestspec1_DQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literals_token1] = aux_sym_string_literals_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literals_token2] = aux_sym_string_literals_token2,
  [sym_syntax_keyword] = sym_syntax_keyword,
  [sym_import_keyword] = sym_import_keyword,
  [sym_enum_keyword] = sym_enum_keyword,
  [sym_enum_option_keyword] = sym_enum_option_keyword,
  [sym_message_keyword] = sym_message_keyword,
  [sym_option_keyword] = sym_option_keyword,
  [sym_standard_type] = sym_standard_type,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_source_file] = sym_source_file,
  [sym_syntax_declaration] = sym_syntax_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_option_declaration] = sym_option_declaration,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literals] = sym_string_literals,
  [sym_type_specifier] = sym_type_specifier,
  [sym__declaration] = sym__declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_case_declaration] = sym_enum_case_declaration,
  [sym_enum_option_declaration] = sym_enum_option_declaration,
  [sym_enum_option_case_declaration] = sym_enum_option_case_declaration,
  [sym_message_declaration] = sym_message_declaration,
  [sym_message_field] = sym_message_field,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_enum_declaration_repeat1] = aux_sym_enum_declaration_repeat1,
  [aux_sym_enum_option_declaration_repeat1] = aux_sym_enum_option_declaration_repeat1,
  [aux_sym_message_declaration_repeat1] = aux_sym_message_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTErestspec1_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literals_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literals_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_syntax_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_import_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_option_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_message_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_option_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_option_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literals] = {
    .visible = true,
    .named = true,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_case_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_option_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_option_case_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_message_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_message_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_option_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static inline bool aux_sym_string_literals_token2_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(157);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ';') ADVANCE(102);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == 'B') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead == '{') ADVANCE(173);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '?') ADVANCE(176);
      if (lookahead == 'B') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(131);
      if (lookahead == 'I') ADVANCE(133);
      if (lookahead == 'S') ADVANCE(140);
      if (lookahead == 'U') ADVANCE(123);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(9);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(160);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(152);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(160);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(7);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(98);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(171);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 85:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 86:
      if (lookahead == 'y') ADVANCE(52);
      END_STATE();
    case 87:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(91);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(92);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(156);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(156);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(118);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DQUOTErestspec1_DQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '3') ADVANCE(120);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead == '8') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(155);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(118);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(109);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(118);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(118);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(118);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_syntax_keyword);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_import_keyword);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_enum_keyword);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_enum_option_keyword);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_message_keyword);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_option_keyword);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_standard_type);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_standard_type);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 161},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 153},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_syntax_keyword] = ACTIONS(1),
    [sym_import_keyword] = ACTIONS(1),
    [sym_enum_keyword] = ACTIONS(1),
    [sym_enum_option_keyword] = ACTIONS(1),
    [sym_message_keyword] = ACTIONS(1),
    [sym_option_keyword] = ACTIONS(1),
    [sym_standard_type] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(60),
    [sym_syntax_declaration] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym_syntax_keyword] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      sym_import_keyword,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(17), 1,
      sym_option_keyword,
    STATE(3), 2,
      sym_option_declaration,
      aux_sym_source_file_repeat1,
    STATE(4), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat2,
    STATE(8), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [37] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_import_keyword,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(17), 1,
      sym_option_keyword,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat2,
    STATE(10), 2,
      sym_option_declaration,
      aux_sym_source_file_repeat1,
    STATE(9), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [74] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_import_keyword,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat2,
    STATE(9), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [104] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_import_keyword,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat2,
    STATE(7), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [134] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_enum_keyword,
    ACTIONS(28), 1,
      sym_enum_option_keyword,
    ACTIONS(31), 1,
      sym_message_keyword,
    STATE(6), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [180] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_enum_keyword,
    ACTIONS(13), 1,
      sym_enum_option_keyword,
    ACTIONS(15), 1,
      sym_message_keyword,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat3,
  [226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      sym_enum_keyword,
    ACTIONS(40), 1,
      sym_option_keyword,
    STATE(10), 2,
      sym_option_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      sym_import_keyword,
      sym_enum_option_keyword,
      sym_message_keyword,
  [246] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_integer_literal,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(48), 2,
      sym_boolean_literal,
      sym_string_literals,
  [267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_import_keyword,
    ACTIONS(56), 1,
      sym_enum_keyword,
    STATE(12), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat2,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_enum_keyword,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_import_keyword,
      sym_enum_option_keyword,
      sym_message_keyword,
      sym_option_keyword,
  [300] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_standard_type,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_type_specifier,
    STATE(14), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [320] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_standard_type,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_type_specifier,
    STATE(14), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [340] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_standard_type,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_type_specifier,
    STATE(15), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_enum_keyword,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      sym_import_keyword,
      sym_enum_option_keyword,
      sym_message_keyword,
      sym_option_keyword,
  [374] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_enum_keyword,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      sym_import_keyword,
      sym_enum_option_keyword,
      sym_message_keyword,
  [387] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_enum_keyword,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_enum_keyword,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_enum_keyword,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_enum_keyword,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym_enum_keyword,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym_enum_keyword,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_enum_option_keyword,
      sym_message_keyword,
  [543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_standard_type,
    ACTIONS(132), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_standard_type,
    ACTIONS(136), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_SQUOTE,
    STATE(58), 1,
      sym_string_literals,
  [578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 2,
      sym_identifier,
      anon_sym_QMARK,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_LT_LT,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_QMARK,
  [640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_identifier,
  [655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_identifier,
  [662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_SEMI,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_EQ,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_identifier,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_SEMI,
  [697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_integer_literal,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
  [725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_integer_literal,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_LBRACE,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_identifier,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_SEMI,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_DQUOTErestspec1_DQUOTE,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_SEMI,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
  [795] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym_string_literals_token2,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_SEMI,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_identifier,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_EQ,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_integer_literal,
  [830] = 2,
    ACTIONS(204), 1,
      sym_comment,
    ACTIONS(216), 1,
      aux_sym_string_literals_token1,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_SEMI,
  [844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 134,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 203,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 340,
  [SMALL_STATE(17)] = 360,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 401,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 441,
  [SMALL_STATE(24)] = 453,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 477,
  [SMALL_STATE(27)] = 489,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 543,
  [SMALL_STATE(32)] = 554,
  [SMALL_STATE(33)] = 565,
  [SMALL_STATE(34)] = 578,
  [SMALL_STATE(35)] = 586,
  [SMALL_STATE(36)] = 596,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 612,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 630,
  [SMALL_STATE(41)] = 640,
  [SMALL_STATE(42)] = 648,
  [SMALL_STATE(43)] = 655,
  [SMALL_STATE(44)] = 662,
  [SMALL_STATE(45)] = 669,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 683,
  [SMALL_STATE(48)] = 690,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 704,
  [SMALL_STATE(51)] = 711,
  [SMALL_STATE(52)] = 718,
  [SMALL_STATE(53)] = 725,
  [SMALL_STATE(54)] = 732,
  [SMALL_STATE(55)] = 739,
  [SMALL_STATE(56)] = 746,
  [SMALL_STATE(57)] = 753,
  [SMALL_STATE(58)] = 760,
  [SMALL_STATE(59)] = 767,
  [SMALL_STATE(60)] = 774,
  [SMALL_STATE(61)] = 781,
  [SMALL_STATE(62)] = 788,
  [SMALL_STATE(63)] = 795,
  [SMALL_STATE(64)] = 802,
  [SMALL_STATE(65)] = 809,
  [SMALL_STATE(66)] = 816,
  [SMALL_STATE(67)] = 823,
  [SMALL_STATE(68)] = 830,
  [SMALL_STATE(69)] = 837,
  [SMALL_STATE(70)] = 844,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(47),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(57),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(65),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(33),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_declaration, 5),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_declaration, 5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_declaration_repeat1, 2), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_declaration_repeat1, 2), SHIFT_REPEAT(34),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_declaration_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_declaration, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax_declaration, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 3),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(35),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_declaration, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_declaration, 5),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_option_declaration_repeat1, 2), SHIFT_REPEAT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_option_declaration_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_declaration, 5),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_option_declaration, 5),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_declaration, 4),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_declaration, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_declaration, 4),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_option_declaration, 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_field, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_field, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_case_declaration, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_case_declaration, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_declaration, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_declaration, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literals, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_restspec(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
