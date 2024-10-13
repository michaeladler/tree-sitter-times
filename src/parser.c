#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  sym_alias = 1,
  sym_project = 2,
  sym_description = 3,
  aux_sym_booking_header_token1 = 4,
  aux_sym_booking_header_token2 = 5,
  aux_sym_booking_header_token3 = 6,
  sym_weekday = 7,
  sym_date = 8,
  aux_sym_booking_token1 = 9,
  aux_sym_booking_token2 = 10,
  sym_time = 11,
  anon_sym_POUND = 12,
  aux_sym_line_comment_token1 = 13,
  sym__ws1 = 14,
  sym_document = 15,
  sym_role = 16,
  sym_booking_section = 17,
  sym_booking_header = 18,
  sym_booking = 19,
  sym_line_comment = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_booking_section_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_alias] = "alias",
  [sym_project] = "project",
  [sym_description] = "description",
  [aux_sym_booking_header_token1] = "booking_header_token1",
  [aux_sym_booking_header_token2] = "booking_header_token2",
  [aux_sym_booking_header_token3] = "booking_header_token3",
  [sym_weekday] = "weekday",
  [sym_date] = "date",
  [aux_sym_booking_token1] = "booking_token1",
  [aux_sym_booking_token2] = "booking_token2",
  [sym_time] = "time",
  [anon_sym_POUND] = "#",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym__ws1] = "_ws1",
  [sym_document] = "document",
  [sym_role] = "role",
  [sym_booking_section] = "booking_section",
  [sym_booking_header] = "booking_header",
  [sym_booking] = "booking",
  [sym_line_comment] = "line_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_booking_section_repeat1] = "booking_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_alias] = sym_alias,
  [sym_project] = sym_project,
  [sym_description] = sym_description,
  [aux_sym_booking_header_token1] = aux_sym_booking_header_token1,
  [aux_sym_booking_header_token2] = aux_sym_booking_header_token2,
  [aux_sym_booking_header_token3] = aux_sym_booking_header_token3,
  [sym_weekday] = sym_weekday,
  [sym_date] = sym_date,
  [aux_sym_booking_token1] = aux_sym_booking_token1,
  [aux_sym_booking_token2] = aux_sym_booking_token2,
  [sym_time] = sym_time,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym__ws1] = sym__ws1,
  [sym_document] = sym_document,
  [sym_role] = sym_role,
  [sym_booking_section] = sym_booking_section,
  [sym_booking_header] = sym_booking_header,
  [sym_booking] = sym_booking,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_booking_section_repeat1] = aux_sym_booking_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_booking_header_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_booking_header_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_booking_header_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_weekday] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_booking_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_booking_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__ws1] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_booking_section] = {
    .visible = true,
    .named = true,
  },
  [sym_booking_header] = {
    .visible = true,
    .named = true,
  },
  [sym_booking] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_booking_section_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_booking_alias = 1,
  field_booking_description = 2,
  field_booking_end = 3,
  field_booking_start = 4,
  field_date = 5,
  field_role_alias = 6,
  field_role_description = 7,
  field_role_project = 8,
  field_weekday = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_booking_alias] = "booking_alias",
  [field_booking_description] = "booking_description",
  [field_booking_end] = "booking_end",
  [field_booking_start] = "booking_start",
  [field_date] = "date",
  [field_role_alias] = "role_alias",
  [field_role_description] = "role_description",
  [field_role_project] = "role_project",
  [field_weekday] = "weekday",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 2},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_role_alias, 0},
    {field_role_description, 3},
    {field_role_project, 1},
  [3] =
    {field_date, 5},
    {field_weekday, 2},
  [5] =
    {field_booking_alias, 6},
    {field_booking_end, 4},
    {field_booking_start, 0},
  [8] =
    {field_booking_alias, 6},
    {field_booking_description, 8},
    {field_booking_end, 4},
    {field_booking_start, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(24);
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '#') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(25);
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(35);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(29);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_booking_header_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_booking_header_token2);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(40);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_booking_header_token2);
      if (lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_booking_header_token3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_booking_header_token3);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_weekday);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_date);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_booking_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_booking_token2);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(40);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_booking_token2);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__ws1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ' ') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ws1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 38},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 4},
  [34] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_alias] = ACTIONS(1),
    [sym_project] = ACTIONS(1),
    [aux_sym_booking_header_token1] = ACTIONS(1),
    [aux_sym_booking_header_token3] = ACTIONS(1),
    [sym_weekday] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [aux_sym_booking_token1] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(20),
    [sym_role] = STATE(13),
    [sym_booking_section] = STATE(13),
    [sym_booking_header] = STATE(4),
    [sym_line_comment] = STATE(1),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_alias] = ACTIONS(7),
    [aux_sym_booking_header_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_alias,
    ACTIONS(9), 1,
      aux_sym_booking_header_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_line_comment,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(4), 1,
      sym_booking_header,
    STATE(13), 2,
      sym_role,
      sym_booking_section,
  [26] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_alias,
    ACTIONS(18), 1,
      aux_sym_booking_header_token1,
    STATE(4), 1,
      sym_booking_header,
    STATE(3), 2,
      sym_line_comment,
      aux_sym_document_repeat1,
    STATE(13), 2,
      sym_role,
      sym_booking_section,
  [50] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_alias,
    ACTIONS(25), 1,
      sym_time,
    STATE(4), 1,
      sym_line_comment,
    STATE(5), 1,
      aux_sym_booking_section_repeat1,
    STATE(8), 1,
      sym_booking,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
  [73] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      sym_time,
    ACTIONS(29), 1,
      sym_alias,
    STATE(5), 1,
      sym_line_comment,
    STATE(6), 1,
      aux_sym_booking_section_repeat1,
    STATE(8), 1,
      sym_booking,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
  [96] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      sym_alias,
    ACTIONS(35), 1,
      sym_time,
    STATE(8), 1,
      sym_booking,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
    STATE(6), 2,
      sym_line_comment,
      aux_sym_booking_section_repeat1,
  [117] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(40), 1,
      sym_alias,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [132] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(44), 1,
      sym_alias,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [147] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      sym_alias,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      sym_alias,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [177] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      sym_alias,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [192] = 5,
    ACTIONS(58), 1,
      aux_sym_booking_header_token2,
    ACTIONS(60), 1,
      aux_sym_booking_token2,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      sym__ws1,
    STATE(12), 1,
      sym_line_comment,
  [208] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      sym_alias,
      aux_sym_booking_header_token1,
  [220] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      sym_alias,
      aux_sym_booking_header_token1,
  [232] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      aux_sym_booking_header_token2,
    STATE(15), 1,
      sym_line_comment,
  [242] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      sym_description,
    STATE(16), 1,
      sym_line_comment,
  [252] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      aux_sym_booking_header_token3,
    STATE(17), 1,
      sym_line_comment,
  [262] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      aux_sym_booking_token1,
    STATE(18), 1,
      sym_line_comment,
  [272] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_line_comment_token1,
    STATE(19), 1,
      sym_line_comment,
  [282] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_line_comment,
  [292] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      aux_sym_booking_header_token2,
    STATE(21), 1,
      sym_line_comment,
  [302] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      aux_sym_booking_header_token2,
    STATE(22), 1,
      sym_line_comment,
  [312] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      sym_date,
    STATE(23), 1,
      sym_line_comment,
  [322] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_time,
    STATE(24), 1,
      sym_line_comment,
  [332] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      sym_project,
    STATE(25), 1,
      sym_line_comment,
  [342] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(92), 1,
      aux_sym_booking_header_token2,
    STATE(26), 1,
      sym_line_comment,
  [352] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      sym_alias,
    STATE(27), 1,
      sym_line_comment,
  [362] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      aux_sym_booking_token2,
    STATE(28), 1,
      sym_line_comment,
  [372] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(98), 1,
      sym_description,
    STATE(29), 1,
      sym_line_comment,
  [382] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      sym__ws1,
    STATE(30), 1,
      sym_line_comment,
  [392] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(102), 1,
      aux_sym_booking_token2,
    STATE(31), 1,
      sym_line_comment,
  [402] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(104), 1,
      sym_weekday,
    STATE(32), 1,
      sym_line_comment,
  [412] = 3,
    ACTIONS(62), 1,
      anon_sym_POUND,
    ACTIONS(106), 1,
      aux_sym_booking_header_token2,
    STATE(33), 1,
      sym_line_comment,
  [422] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 208,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 232,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 252,
  [SMALL_STATE(18)] = 262,
  [SMALL_STATE(19)] = 272,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 292,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 312,
  [SMALL_STATE(24)] = 322,
  [SMALL_STATE(25)] = 332,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 352,
  [SMALL_STATE(28)] = 362,
  [SMALL_STATE(29)] = 372,
  [SMALL_STATE(30)] = 382,
  [SMALL_STATE(31)] = 392,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 412,
  [SMALL_STATE(34)] = 422,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_section, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_section, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_section, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_section, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_header, 6, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_header, 6, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_booking_section_repeat1, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking, 8, 0, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking, 8, 0, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking, 9, 0, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking, 9, 0, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking, 10, 0, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking, 10, 0, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 4, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_times(void) {
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
