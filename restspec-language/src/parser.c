#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_syntax = 1,
  anon_sym_EQ = 2,
  anon_sym_DQUOTErestspec1_DQUOTE = 3,
  anon_sym_SEMI = 4,
  anon_sym_import = 5,
  sym_comment = 6,
  sym_identifier = 7,
  sym_integer_literal = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_string_literals_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_string_literals_token2 = 14,
  sym_standard_type = 15,
  anon_sym_enum = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_enum_option = 19,
  anon_sym_LT_LT = 20,
  anon_sym_message = 21,
  anon_sym_QMARK = 22,
  sym_source_file = 23,
  sym_syntax_declaration = 24,
  sym_import_declaration = 25,
  sym_string_literals = 26,
  sym_type_specifier = 27,
  sym__declaration = 28,
  sym_enum_declaration = 29,
  sym_enum_case_declaration = 30,
  sym_enum_option_declaration = 31,
  sym_enum_option_case_declaration = 32,
  sym_message_declaration = 33,
  sym_message_field = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_source_file_repeat2 = 36,
  aux_sym_enum_declaration_repeat1 = 37,
  aux_sym_enum_option_declaration_repeat1 = 38,
  aux_sym_message_declaration_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTErestspec1_DQUOTE] = "\"restspec1\"",
  [anon_sym_SEMI] = ";",
  [anon_sym_import] = "import",
  [sym_comment] = "comment",
  [sym_identifier] = "identifier",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literals_token1] = "string_literals_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literals_token2] = "string_literals_token2",
  [sym_standard_type] = "standard_type",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_enum_option] = "enum_option",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_message] = "message",
  [anon_sym_QMARK] = "\?",
  [sym_source_file] = "source_file",
  [sym_syntax_declaration] = "syntax_declaration",
  [sym_import_declaration] = "import_declaration",
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
  [aux_sym_enum_declaration_repeat1] = "enum_declaration_repeat1",
  [aux_sym_enum_option_declaration_repeat1] = "enum_option_declaration_repeat1",
  [aux_sym_message_declaration_repeat1] = "message_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTErestspec1_DQUOTE] = anon_sym_DQUOTErestspec1_DQUOTE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_import] = anon_sym_import,
  [sym_comment] = sym_comment,
  [sym_identifier] = sym_identifier,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literals_token1] = aux_sym_string_literals_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literals_token2] = aux_sym_string_literals_token2,
  [sym_standard_type] = sym_standard_type,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_enum_option] = anon_sym_enum_option,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_source_file] = sym_source_file,
  [sym_syntax_declaration] = sym_syntax_declaration,
  [sym_import_declaration] = sym_import_declaration,
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
  [aux_sym_enum_declaration_repeat1] = aux_sym_enum_declaration_repeat1,
  [aux_sym_enum_option_declaration_repeat1] = aux_sym_enum_option_declaration_repeat1,
  [aux_sym_message_declaration_repeat1] = aux_sym_message_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
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
  [anon_sym_import] = {
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
  [sym_standard_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
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
      if (eof) ADVANCE(108);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(169);
      if (lookahead == ';') ADVANCE(112);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '?') ADVANCE(198);
      if (lookahead == 'B') ADVANCE(62);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(60);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(57);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '?') ADVANCE(198);
      if (lookahead == 'B') ADVANCE(157);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(151);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == 'S') ADVANCE(162);
      if (lookahead == 'U') ADVANCE(134);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(9);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(185);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(177);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
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
      if (lookahead == '/') ADVANCE(107);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(1);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(190);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == '6') ADVANCE(190);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(196);
      END_STATE();
    case 22:
      if (lookahead == 'I') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 95:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 96:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(100);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(181);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(189);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(181);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(99);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTErestspec1_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(189);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(124);
      if (aux_sym_string_literals_token2_character_set_1(lookahead)) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(133);
      if (lookahead == '3') ADVANCE(131);
      if (lookahead == '6') ADVANCE(132);
      if (lookahead == '8') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '*') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(15);
      if (lookahead != 0) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(129);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(120);
      if (lookahead == '\n' ||
          lookahead == '"') ADVANCE(129);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_literals_token1);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(189);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '*') ADVANCE(184);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(189);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '/') ADVANCE(187);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\n' ||
          lookahead == '\'') ADVANCE(129);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_literals_token2);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_standard_type);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_standard_type);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == '8') ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_enum_option);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 198:
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 186},
  [43] = {.lex_state = 178},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_standard_type] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_enum_option] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_syntax_declaration] = STATE(3),
    [anon_sym_syntax] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_enum_option,
    ACTIONS(15), 1,
      anon_sym_message,
    STATE(7), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat1,
    STATE(5), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat2,
  [30] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_enum_option,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat1,
    STATE(6), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat2,
  [60] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(24), 1,
      anon_sym_enum_option,
    ACTIONS(27), 1,
      anon_sym_message,
    STATE(4), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat2,
  [83] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_enum_option,
    ACTIONS(15), 1,
      anon_sym_message,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    STATE(4), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat2,
  [106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_enum,
    ACTIONS(13), 1,
      anon_sym_enum_option,
    ACTIONS(15), 1,
      anon_sym_message,
    STATE(4), 5,
      sym__declaration,
      sym_enum_declaration,
      sym_enum_option_declaration,
      sym_message_declaration,
      aux_sym_source_file_repeat2,
  [129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_enum,
    STATE(7), 2,
      sym_import_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(32), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_standard_type,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_type_specifier,
    STATE(10), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_standard_type,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_type_specifier,
    STATE(8), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_standard_type,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_type_specifier,
    STATE(10), 2,
      sym_message_field,
      aux_sym_message_declaration_repeat1,
  [208] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_enum,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_enum_option,
      anon_sym_message,
  [221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_enum,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_enum_option,
      anon_sym_message,
  [234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_enum,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_enum,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_enum,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_enum,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_enum,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_enum,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_enum_option,
      anon_sym_message,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym_enum_case_declaration,
      aux_sym_enum_declaration_repeat1,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_enum_option_case_declaration,
      aux_sym_enum_option_declaration_repeat1,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_standard_type,
    ACTIONS(109), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    STATE(40), 1,
      sym_string_literals,
  [414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_standard_type,
    ACTIONS(117), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      anon_sym_SEMI,
  [435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      sym_identifier,
      anon_sym_QMARK,
  [443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_LT_LT,
  [477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [485] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_QMARK,
  [495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_identifier,
  [509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
  [523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_SEMI,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_integer_literal,
  [537] = 2,
    ACTIONS(155), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_string_literals_token2,
  [544] = 2,
    ACTIONS(155), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_string_literals_token1,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_integer_literal,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_SEMI,
  [565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_identifier,
  [572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_SEMI,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_EQ,
  [614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTErestspec1_DQUOTE,
  [621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_SEMI,
  [628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
  [642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_integer_literal,
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 188,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 272,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 324,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 376,
  [SMALL_STATE(25)] = 390,
  [SMALL_STATE(26)] = 401,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 435,
  [SMALL_STATE(30)] = 443,
  [SMALL_STATE(31)] = 451,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 467,
  [SMALL_STATE(34)] = 477,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 495,
  [SMALL_STATE(37)] = 502,
  [SMALL_STATE(38)] = 509,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 523,
  [SMALL_STATE(41)] = 530,
  [SMALL_STATE(42)] = 537,
  [SMALL_STATE(43)] = 544,
  [SMALL_STATE(44)] = 551,
  [SMALL_STATE(45)] = 558,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 572,
  [SMALL_STATE(48)] = 579,
  [SMALL_STATE(49)] = 586,
  [SMALL_STATE(50)] = 593,
  [SMALL_STATE(51)] = 600,
  [SMALL_STATE(52)] = 607,
  [SMALL_STATE(53)] = 614,
  [SMALL_STATE(54)] = 621,
  [SMALL_STATE(55)] = 628,
  [SMALL_STATE(56)] = 635,
  [SMALL_STATE(57)] = 642,
  [SMALL_STATE(58)] = 649,
  [SMALL_STATE(59)] = 656,
  [SMALL_STATE(60)] = 663,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(50),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(37),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(46),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_declaration_repeat1, 2), SHIFT_REPEAT(29),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_declaration_repeat1, 2), SHIFT_REPEAT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_declaration_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax_declaration, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_syntax_declaration, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_declaration, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_declaration, 5),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_option_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_option_declaration_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_declaration, 5),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_option_declaration, 5),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2), SHIFT_REPEAT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_declaration_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_declaration, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_declaration, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_declaration, 4),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_option_declaration, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_field, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_field, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_field, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_specifier, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_case_declaration, 6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_option_case_declaration, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_declaration, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_declaration, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literals, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
