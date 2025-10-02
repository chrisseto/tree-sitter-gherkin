#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  sym__newline = 1,
  anon_sym_POUND = 2,
  aux_sym_comment_token1 = 3,
  anon_sym_Feature = 4,
  anon_sym_Ability = 5,
  anon_sym_BusinessNeed = 6,
  anon_sym_COLON = 7,
  anon_sym_Background = 8,
  anon_sym_Scenario = 9,
  anon_sym_Example = 10,
  anon_sym_ScenarioOutline = 11,
  anon_sym_ScenarioTemplate = 12,
  anon_sym_Examples = 13,
  anon_sym_Given = 14,
  anon_sym_When = 15,
  anon_sym_Then = 16,
  anon_sym_And = 17,
  anon_sym_But = 18,
  anon_sym_STAR = 19,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 20,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 21,
  aux_sym_data_table_token1 = 22,
  sym_source_file = 23,
  sym__item = 24,
  sym_comment = 25,
  sym_feature = 26,
  sym__feature_child = 27,
  sym_background = 28,
  sym__background_child = 29,
  sym_scenario = 30,
  sym__scenario_child = 31,
  sym_scenario_outline = 32,
  sym_examples = 33,
  sym_step = 34,
  sym_doc_string = 35,
  sym_data_table = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_feature_repeat1 = 38,
  aux_sym_background_repeat1 = 39,
  aux_sym_scenario_repeat1 = 40,
  aux_sym_scenario_outline_repeat1 = 41,
  aux_sym_examples_repeat1 = 42,
  aux_sym_doc_string_repeat1 = 43,
  aux_sym_data_table_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_Feature] = "Feature",
  [anon_sym_Ability] = "Ability",
  [anon_sym_BusinessNeed] = "Business Need",
  [anon_sym_COLON] = ":",
  [anon_sym_Background] = "Background",
  [anon_sym_Scenario] = "Scenario",
  [anon_sym_Example] = "Example",
  [anon_sym_ScenarioOutline] = "Scenario Outline",
  [anon_sym_ScenarioTemplate] = "Scenario Template",
  [anon_sym_Examples] = "Examples",
  [anon_sym_Given] = "Given",
  [anon_sym_When] = "When",
  [anon_sym_Then] = "Then",
  [anon_sym_And] = "And",
  [anon_sym_But] = "But",
  [anon_sym_STAR] = "*",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_data_table_token1] = "data_table_token1",
  [sym_source_file] = "source_file",
  [sym__item] = "_item",
  [sym_comment] = "comment",
  [sym_feature] = "feature",
  [sym__feature_child] = "_feature_child",
  [sym_background] = "background",
  [sym__background_child] = "_background_child",
  [sym_scenario] = "scenario",
  [sym__scenario_child] = "_scenario_child",
  [sym_scenario_outline] = "scenario_outline",
  [sym_examples] = "examples",
  [sym_step] = "step",
  [sym_doc_string] = "doc_string",
  [sym_data_table] = "data_table",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_scenario_repeat1] = "scenario_repeat1",
  [aux_sym_scenario_outline_repeat1] = "scenario_outline_repeat1",
  [aux_sym_examples_repeat1] = "examples_repeat1",
  [aux_sym_doc_string_repeat1] = "doc_string_repeat1",
  [aux_sym_data_table_repeat1] = "data_table_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_Feature] = anon_sym_Feature,
  [anon_sym_Ability] = anon_sym_Ability,
  [anon_sym_BusinessNeed] = anon_sym_BusinessNeed,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Background] = anon_sym_Background,
  [anon_sym_Scenario] = anon_sym_Scenario,
  [anon_sym_Example] = anon_sym_Example,
  [anon_sym_ScenarioOutline] = anon_sym_ScenarioOutline,
  [anon_sym_ScenarioTemplate] = anon_sym_ScenarioTemplate,
  [anon_sym_Examples] = anon_sym_Examples,
  [anon_sym_Given] = anon_sym_Given,
  [anon_sym_When] = anon_sym_When,
  [anon_sym_Then] = anon_sym_Then,
  [anon_sym_And] = anon_sym_And,
  [anon_sym_But] = anon_sym_But,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_data_table_token1] = aux_sym_data_table_token1,
  [sym_source_file] = sym_source_file,
  [sym__item] = sym__item,
  [sym_comment] = sym_comment,
  [sym_feature] = sym_feature,
  [sym__feature_child] = sym__feature_child,
  [sym_background] = sym_background,
  [sym__background_child] = sym__background_child,
  [sym_scenario] = sym_scenario,
  [sym__scenario_child] = sym__scenario_child,
  [sym_scenario_outline] = sym_scenario_outline,
  [sym_examples] = sym_examples,
  [sym_step] = sym_step,
  [sym_doc_string] = sym_doc_string,
  [sym_data_table] = sym_data_table,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_feature_repeat1] = aux_sym_feature_repeat1,
  [aux_sym_background_repeat1] = aux_sym_background_repeat1,
  [aux_sym_scenario_repeat1] = aux_sym_scenario_repeat1,
  [aux_sym_scenario_outline_repeat1] = aux_sym_scenario_outline_repeat1,
  [aux_sym_examples_repeat1] = aux_sym_examples_repeat1,
  [aux_sym_doc_string_repeat1] = aux_sym_doc_string_repeat1,
  [aux_sym_data_table_repeat1] = aux_sym_data_table_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Feature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ability] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BusinessNeed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Background] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Scenario] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Example] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScenarioOutline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScenarioTemplate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Examples] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Given] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_When] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_And] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_But] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_table_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym__feature_child] = {
    .visible = false,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym__background_child] = {
    .visible = false,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym__scenario_child] = {
    .visible = false,
    .named = true,
  },
  [sym_scenario_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_examples] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string] = {
    .visible = true,
    .named = true,
  },
  [sym_data_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scenario_outline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_examples_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_doc_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'A') ADVANCE(14);
      if (lookahead == 'B') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'G') ADVANCE(36);
      if (lookahead == 'S') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == 'W') ADVANCE(35);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'N') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(2);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == '|') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Feature);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Ability);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BusinessNeed);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Background);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Scenario);
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Example);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_ScenarioOutline);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_ScenarioTemplate);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Examples);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Given);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_When);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Then);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_And);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_But);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_data_table_token1);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(76);
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
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 80},
  [45] = {.lex_state = 80},
  [46] = {.lex_state = 80},
  [47] = {.lex_state = 80},
  [48] = {.lex_state = 80},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 85},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 85},
  [54] = {.lex_state = 85},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Feature] = ACTIONS(1),
    [anon_sym_Ability] = ACTIONS(1),
    [anon_sym_BusinessNeed] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Background] = ACTIONS(1),
    [anon_sym_Scenario] = ACTIONS(1),
    [anon_sym_Example] = ACTIONS(1),
    [anon_sym_ScenarioOutline] = ACTIONS(1),
    [anon_sym_ScenarioTemplate] = ACTIONS(1),
    [anon_sym_Examples] = ACTIONS(1),
    [anon_sym_Given] = ACTIONS(1),
    [anon_sym_When] = ACTIONS(1),
    [anon_sym_Then] = ACTIONS(1),
    [anon_sym_And] = ACTIONS(1),
    [anon_sym_But] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_data_table_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym__item] = STATE(43),
    [sym_comment] = STATE(43),
    [sym_feature] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_Feature] = ACTIONS(9),
    [anon_sym_Ability] = ACTIONS(9),
    [anon_sym_BusinessNeed] = ACTIONS(9),
  },
  [2] = {
    [sym_doc_string] = STATE(20),
    [sym_data_table] = STATE(20),
    [aux_sym_data_table_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym__newline] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_Feature] = ACTIONS(11),
    [anon_sym_Ability] = ACTIONS(11),
    [anon_sym_BusinessNeed] = ACTIONS(11),
    [anon_sym_Background] = ACTIONS(11),
    [anon_sym_Scenario] = ACTIONS(13),
    [anon_sym_Example] = ACTIONS(13),
    [anon_sym_ScenarioOutline] = ACTIONS(11),
    [anon_sym_ScenarioTemplate] = ACTIONS(11),
    [anon_sym_Examples] = ACTIONS(11),
    [anon_sym_Given] = ACTIONS(11),
    [anon_sym_When] = ACTIONS(11),
    [anon_sym_Then] = ACTIONS(11),
    [anon_sym_And] = ACTIONS(11),
    [anon_sym_But] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(15),
    [aux_sym_data_table_token1] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(21), 1,
      sym__newline,
    ACTIONS(24), 1,
      anon_sym_POUND,
    ACTIONS(27), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(3), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(29), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [35] = 6,
    ACTIONS(34), 1,
      sym__newline,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      anon_sym_Scenario,
    STATE(3), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(32), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [69] = 6,
    ACTIONS(46), 1,
      sym__newline,
    ACTIONS(49), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      anon_sym_Scenario,
    STATE(11), 4,
      sym_comment,
      sym__background_child,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(44), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [103] = 6,
    ACTIONS(56), 1,
      sym__newline,
    ACTIONS(59), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      anon_sym_Scenario,
    STATE(7), 4,
      sym_comment,
      sym__background_child,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [137] = 6,
    ACTIONS(66), 1,
      sym__newline,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      anon_sym_Scenario,
    STATE(7), 4,
      sym_comment,
      sym__background_child,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(74), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [171] = 6,
    ACTIONS(79), 1,
      sym__newline,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      anon_sym_Scenario,
    STATE(4), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [205] = 6,
    ACTIONS(82), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      anon_sym_Scenario,
    ACTIONS(87), 1,
      sym__newline,
    STATE(3), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(77), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [239] = 6,
    ACTIONS(92), 1,
      sym__newline,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_Scenario,
    STATE(6), 4,
      sym_comment,
      sym__background_child,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [273] = 6,
    ACTIONS(95), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      anon_sym_Scenario,
    ACTIONS(100), 1,
      sym__newline,
    STATE(7), 4,
      sym_comment,
      sym__background_child,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(90), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [307] = 6,
    ACTIONS(105), 1,
      sym__newline,
    ACTIONS(108), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      anon_sym_Scenario,
    STATE(9), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_Example,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [341] = 4,
    ACTIONS(117), 1,
      aux_sym_data_table_token1,
    STATE(13), 1,
      aux_sym_data_table_repeat1,
    ACTIONS(115), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(113), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [370] = 4,
    ACTIONS(17), 1,
      aux_sym_data_table_token1,
    STATE(13), 1,
      aux_sym_data_table_repeat1,
    ACTIONS(122), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(120), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [399] = 2,
    ACTIONS(126), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(124), 17,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
      aux_sym_data_table_token1,
  [423] = 2,
    ACTIONS(115), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(113), 17,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
      aux_sym_data_table_token1,
  [447] = 2,
    ACTIONS(130), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(128), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [470] = 2,
    ACTIONS(134), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(132), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [493] = 2,
    ACTIONS(138), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(136), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [516] = 2,
    ACTIONS(142), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(140), 16,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [539] = 8,
    ACTIONS(17), 1,
      aux_sym_data_table_token1,
    ACTIONS(146), 1,
      sym__newline,
    ACTIONS(149), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym_data_table_repeat1,
    STATE(40), 1,
      sym_data_table,
    ACTIONS(152), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(27), 2,
      sym_comment,
      aux_sym_examples_repeat1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [573] = 8,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(159), 1,
      anon_sym_POUND,
    ACTIONS(162), 1,
      anon_sym_Background,
    ACTIONS(164), 1,
      anon_sym_Scenario,
    ACTIONS(166), 1,
      anon_sym_Example,
    ACTIONS(168), 2,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(26), 6,
      sym_comment,
      sym__feature_child,
      sym_background,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [607] = 8,
    ACTIONS(17), 1,
      aux_sym_data_table_token1,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(175), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym_data_table_repeat1,
    STATE(41), 1,
      sym_data_table,
    ACTIONS(178), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(30), 2,
      sym_comment,
      aux_sym_examples_repeat1,
    ACTIONS(170), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [641] = 8,
    ACTIONS(162), 1,
      anon_sym_Background,
    ACTIONS(164), 1,
      anon_sym_Scenario,
    ACTIONS(166), 1,
      anon_sym_Example,
    ACTIONS(182), 1,
      sym__newline,
    ACTIONS(185), 1,
      anon_sym_POUND,
    ACTIONS(168), 2,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(28), 6,
      sym_comment,
      sym__feature_child,
      sym_background,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [675] = 8,
    ACTIONS(190), 1,
      sym__newline,
    ACTIONS(193), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_Background,
    ACTIONS(199), 1,
      anon_sym_Scenario,
    ACTIONS(202), 1,
      anon_sym_Example,
    ACTIONS(205), 2,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(25), 6,
      sym_comment,
      sym__feature_child,
      sym_background,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [709] = 8,
    ACTIONS(162), 1,
      anon_sym_Background,
    ACTIONS(164), 1,
      anon_sym_Scenario,
    ACTIONS(166), 1,
      anon_sym_Example,
    ACTIONS(210), 1,
      sym__newline,
    ACTIONS(213), 1,
      anon_sym_POUND,
    ACTIONS(168), 2,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
    ACTIONS(208), 4,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(25), 6,
      sym_comment,
      sym__feature_child,
      sym_background,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [743] = 8,
    ACTIONS(17), 1,
      aux_sym_data_table_token1,
    ACTIONS(218), 1,
      sym__newline,
    ACTIONS(221), 1,
      anon_sym_POUND,
    STATE(14), 1,
      aux_sym_data_table_repeat1,
    STATE(39), 1,
      sym_data_table,
    ACTIONS(224), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(30), 2,
      sym_comment,
      aux_sym_examples_repeat1,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [777] = 8,
    ACTIONS(162), 1,
      anon_sym_Background,
    ACTIONS(164), 1,
      anon_sym_Scenario,
    ACTIONS(166), 1,
      anon_sym_Example,
    ACTIONS(228), 1,
      sym__newline,
    ACTIONS(231), 1,
      anon_sym_POUND,
    ACTIONS(168), 2,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
    ACTIONS(226), 4,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(25), 6,
      sym_comment,
      sym__feature_child,
      sym_background,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [811] = 8,
    ACTIONS(17), 1,
      aux_sym_data_table_token1,
    ACTIONS(221), 1,
      anon_sym_POUND,
    ACTIONS(234), 1,
      sym__newline,
    STATE(14), 1,
      aux_sym_data_table_repeat1,
    STATE(39), 1,
      sym_data_table,
    ACTIONS(224), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(23), 2,
      sym_comment,
      aux_sym_examples_repeat1,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [845] = 5,
    ACTIONS(239), 1,
      sym__newline,
    ACTIONS(242), 1,
      anon_sym_POUND,
    ACTIONS(245), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(30), 2,
      sym_comment,
      aux_sym_examples_repeat1,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
      aux_sym_data_table_token1,
  [871] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_Examples,
    STATE(35), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    STATE(3), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [899] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(247), 1,
      sym__newline,
    ACTIONS(249), 1,
      anon_sym_Examples,
    STATE(37), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    STATE(3), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [927] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_Examples,
    ACTIONS(251), 1,
      sym__newline,
    STATE(37), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    STATE(31), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [955] = 6,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(249), 1,
      anon_sym_Examples,
    ACTIONS(253), 1,
      sym__newline,
    STATE(36), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    STATE(32), 4,
      sym_comment,
      sym__scenario_child,
      sym_step,
      aux_sym_scenario_repeat1,
    ACTIONS(42), 6,
      anon_sym_Given,
      anon_sym_When,
      anon_sym_Then,
      anon_sym_And,
      anon_sym_But,
      anon_sym_STAR,
  [983] = 4,
    ACTIONS(249), 1,
      anon_sym_Examples,
    ACTIONS(257), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(38), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(255), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [1006] = 4,
    ACTIONS(249), 1,
      anon_sym_Examples,
    ACTIONS(261), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(38), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(259), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [1029] = 4,
    ACTIONS(249), 1,
      anon_sym_Examples,
    ACTIONS(265), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(38), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [1052] = 4,
    ACTIONS(271), 1,
      anon_sym_Examples,
    ACTIONS(269), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    STATE(38), 2,
      sym_examples,
      aux_sym_scenario_outline_repeat1,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
  [1075] = 2,
    ACTIONS(178), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(170), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [1092] = 2,
    ACTIONS(224), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(216), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [1109] = 2,
    ACTIONS(276), 2,
      anon_sym_Scenario,
      anon_sym_Example,
    ACTIONS(274), 10,
      ts_builtin_sym_end,
      sym__newline,
      anon_sym_POUND,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
      anon_sym_Background,
      anon_sym_ScenarioOutline,
      anon_sym_ScenarioTemplate,
      anon_sym_Examples,
  [1126] = 5,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
    ACTIONS(280), 1,
      sym__newline,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(286), 3,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(42), 4,
      sym__item,
      sym_comment,
      sym_feature,
      aux_sym_source_file_repeat1,
  [1147] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(9), 3,
      anon_sym_Feature,
      anon_sym_Ability,
      anon_sym_BusinessNeed,
    STATE(42), 4,
      sym__item,
      sym_comment,
      sym_feature,
      aux_sym_source_file_repeat1,
  [1168] = 3,
    ACTIONS(293), 1,
      aux_sym_comment_token1,
    STATE(48), 1,
      aux_sym_doc_string_repeat1,
    ACTIONS(295), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1179] = 3,
    ACTIONS(293), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      aux_sym_doc_string_repeat1,
    ACTIONS(297), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1190] = 3,
    ACTIONS(299), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      aux_sym_doc_string_repeat1,
    ACTIONS(302), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1201] = 3,
    ACTIONS(293), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      aux_sym_doc_string_repeat1,
    ACTIONS(304), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1212] = 3,
    ACTIONS(293), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      aux_sym_doc_string_repeat1,
    ACTIONS(304), 2,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1223] = 1,
    ACTIONS(302), 3,
      aux_sym_comment_token1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1229] = 2,
    ACTIONS(306), 1,
      sym__newline,
    ACTIONS(308), 1,
      aux_sym_comment_token1,
  [1236] = 2,
    ACTIONS(310), 1,
      sym__newline,
    ACTIONS(312), 1,
      aux_sym_comment_token1,
  [1243] = 2,
    ACTIONS(314), 1,
      sym__newline,
    ACTIONS(316), 1,
      aux_sym_comment_token1,
  [1250] = 2,
    ACTIONS(318), 1,
      sym__newline,
    ACTIONS(320), 1,
      aux_sym_comment_token1,
  [1257] = 2,
    ACTIONS(322), 1,
      sym__newline,
    ACTIONS(324), 1,
      aux_sym_comment_token1,
  [1264] = 2,
    ACTIONS(326), 1,
      sym__newline,
    ACTIONS(328), 1,
      aux_sym_comment_token1,
  [1271] = 1,
    ACTIONS(330), 1,
      sym__newline,
  [1275] = 1,
    ACTIONS(332), 1,
      sym__newline,
  [1279] = 1,
    ACTIONS(334), 1,
      sym__newline,
  [1283] = 1,
    ACTIONS(336), 1,
      sym__newline,
  [1287] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1291] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1295] = 1,
    ACTIONS(342), 1,
      anon_sym_COLON,
  [1299] = 1,
    ACTIONS(344), 1,
      sym__newline,
  [1303] = 1,
    ACTIONS(346), 1,
      sym__newline,
  [1307] = 1,
    ACTIONS(348), 1,
      sym__newline,
  [1311] = 1,
    ACTIONS(350), 1,
      aux_sym_comment_token1,
  [1315] = 1,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
  [1319] = 1,
    ACTIONS(354), 1,
      sym__newline,
  [1323] = 1,
    ACTIONS(356), 1,
      anon_sym_COLON,
  [1327] = 1,
    ACTIONS(358), 1,
      sym__newline,
  [1331] = 1,
    ACTIONS(360), 1,
      sym__newline,
  [1335] = 1,
    ACTIONS(362), 1,
      sym__newline,
  [1339] = 1,
    ACTIONS(364), 1,
      sym__newline,
  [1343] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [1347] = 1,
    ACTIONS(368), 1,
      sym__newline,
  [1351] = 1,
    ACTIONS(370), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 341,
  [SMALL_STATE(14)] = 370,
  [SMALL_STATE(15)] = 399,
  [SMALL_STATE(16)] = 423,
  [SMALL_STATE(17)] = 447,
  [SMALL_STATE(18)] = 470,
  [SMALL_STATE(19)] = 493,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 539,
  [SMALL_STATE(22)] = 573,
  [SMALL_STATE(23)] = 607,
  [SMALL_STATE(24)] = 641,
  [SMALL_STATE(25)] = 675,
  [SMALL_STATE(26)] = 709,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 777,
  [SMALL_STATE(29)] = 811,
  [SMALL_STATE(30)] = 845,
  [SMALL_STATE(31)] = 871,
  [SMALL_STATE(32)] = 899,
  [SMALL_STATE(33)] = 927,
  [SMALL_STATE(34)] = 955,
  [SMALL_STATE(35)] = 983,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1029,
  [SMALL_STATE(38)] = 1052,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1092,
  [SMALL_STATE(41)] = 1109,
  [SMALL_STATE(42)] = 1126,
  [SMALL_STATE(43)] = 1147,
  [SMALL_STATE(44)] = 1168,
  [SMALL_STATE(45)] = 1179,
  [SMALL_STATE(46)] = 1190,
  [SMALL_STATE(47)] = 1201,
  [SMALL_STATE(48)] = 1212,
  [SMALL_STATE(49)] = 1223,
  [SMALL_STATE(50)] = 1229,
  [SMALL_STATE(51)] = 1236,
  [SMALL_STATE(52)] = 1243,
  [SMALL_STATE(53)] = 1250,
  [SMALL_STATE(54)] = 1257,
  [SMALL_STATE(55)] = 1264,
  [SMALL_STATE(56)] = 1271,
  [SMALL_STATE(57)] = 1275,
  [SMALL_STATE(58)] = 1279,
  [SMALL_STATE(59)] = 1283,
  [SMALL_STATE(60)] = 1287,
  [SMALL_STATE(61)] = 1291,
  [SMALL_STATE(62)] = 1295,
  [SMALL_STATE(63)] = 1299,
  [SMALL_STATE(64)] = 1303,
  [SMALL_STATE(65)] = 1307,
  [SMALL_STATE(66)] = 1311,
  [SMALL_STATE(67)] = 1315,
  [SMALL_STATE(68)] = 1319,
  [SMALL_STATE(69)] = 1323,
  [SMALL_STATE(70)] = 1327,
  [SMALL_STATE(71)] = 1331,
  [SMALL_STATE(72)] = 1335,
  [SMALL_STATE(73)] = 1339,
  [SMALL_STATE(74)] = 1343,
  [SMALL_STATE(75)] = 1347,
  [SMALL_STATE(76)] = 1351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2), SHIFT_REPEAT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scenario_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_repeat1, 2), SHIFT_REPEAT(67),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 5),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 5), SHIFT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 5), SHIFT(66),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario, 5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 3),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 3), SHIFT(11),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 3), SHIFT(66),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 5),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 5), SHIFT(7),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 5), SHIFT(66),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(7),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(66),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_background_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(67),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 4), SHIFT(4),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 4), SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario, 4),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 4), SHIFT(3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 4), SHIFT(6),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 4), SHIFT(66),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 4),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_background, 4), SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 3), SHIFT(9),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_scenario, 3), SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_table_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_table_repeat1, 2), SHIFT_REPEAT(68),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_table, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_table, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_string, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 6),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_string, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_doc_string, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 3),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 3), SHIFT(27),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 3), SHIFT(66),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4, .production_id = 1),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 4, .production_id = 1), SHIFT(26),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 4, .production_id = 1), SHIFT(66),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 5),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 5), SHIFT(30),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 5), SHIFT(66),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 3), SHIFT(28),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 3), SHIFT(66),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(25),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(66),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(62),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(61),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(61),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(60),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5, .production_id = 1),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 5, .production_id = 1), SHIFT(25),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 5, .production_id = 1), SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 4),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 4), SHIFT(30),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 4), SHIFT(66),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 4), SHIFT(25),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_feature, 4), SHIFT(66),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_examples, 4), SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_examples_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_examples_repeat1, 2), SHIFT_REPEAT(30),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_examples_repeat1, 2), SHIFT_REPEAT(66),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_examples_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 6),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario_outline, 6),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario_outline, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scenario_outline, 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scenario_outline_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scenario_outline_repeat1, 2), SHIFT_REPEAT(69),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 6),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_examples, 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_doc_string_repeat1, 2), SHIFT_REPEAT(64),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_doc_string_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gherkin(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
