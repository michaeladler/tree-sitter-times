#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  sym_time = 10,
  anon_sym_POUND = 11,
  aux_sym_line_comment_token1 = 12,
  sym__ws1 = 13,
  sym_document = 14,
  sym_role = 15,
  sym_booking_section = 16,
  sym_booking_header = 17,
  sym_booking = 18,
  sym_line_comment = 19,
  aux_sym_document_repeat1 = 20,
  aux_sym_booking_section_repeat1 = 21,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '*') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '_') ADVANCE(18);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_alias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_project);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_description);
      if (lookahead == '#') ADVANCE(32);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_description);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_booking_header_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_booking_header_token2);
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_booking_header_token3);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_booking_header_token3);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_weekday);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_date);
      if (('-' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_booking_token1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '#') ADVANCE(31);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__ws1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 1},
  [30] = {(TSStateId)(-1)},
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
    [sym_document] = STATE(13),
    [sym_role] = STATE(11),
    [sym_booking_section] = STATE(11),
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
    STATE(11), 2,
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
    STATE(11), 2,
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
  [117] = 5,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_booking_header_token2,
    ACTIONS(44), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(40), 3,
      sym_alias,
      aux_sym_booking_header_token1,
      sym_time,
  [135] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(48), 1,
      sym_alias,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [150] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      sym_alias,
    STATE(9), 1,
      sym_line_comment,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [165] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      sym_alias,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_booking_header_token1,
      sym_time,
  [180] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      sym_alias,
      aux_sym_booking_header_token1,
  [192] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      sym_alias,
      aux_sym_booking_header_token1,
  [204] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_line_comment,
  [214] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      aux_sym_line_comment_token1,
    STATE(14), 1,
      sym_line_comment,
  [224] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(66), 1,
      aux_sym_booking_header_token2,
    STATE(15), 1,
      sym_line_comment,
  [234] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      sym_project,
    STATE(16), 1,
      sym_line_comment,
  [244] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym__ws1,
    STATE(17), 1,
      sym_line_comment,
  [254] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      aux_sym_booking_header_token2,
    STATE(18), 1,
      sym_line_comment,
  [264] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      sym_weekday,
    STATE(19), 1,
      sym_line_comment,
  [274] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      aux_sym_booking_token1,
    STATE(20), 1,
      sym_line_comment,
  [284] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      aux_sym_booking_header_token3,
    STATE(21), 1,
      sym_line_comment,
  [294] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(80), 1,
      aux_sym_booking_header_token2,
    STATE(22), 1,
      sym_line_comment,
  [304] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      aux_sym_booking_header_token2,
    STATE(23), 1,
      sym_line_comment,
  [314] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      sym_date,
    STATE(24), 1,
      sym_line_comment,
  [324] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      sym_time,
    STATE(25), 1,
      sym_line_comment,
  [334] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(88), 1,
      sym_description,
    STATE(26), 1,
      sym_line_comment,
  [344] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      aux_sym_booking_header_token2,
    STATE(27), 1,
      sym_line_comment,
  [354] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(92), 1,
      sym_alias,
    STATE(28), 1,
      sym_line_comment,
  [364] = 3,
    ACTIONS(44), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      sym_description,
    STATE(29), 1,
      sym_line_comment,
  [374] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 150,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 204,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 224,
  [SMALL_STATE(16)] = 234,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 294,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 314,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 334,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_section, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_section, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_section, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_section, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking, 7, 0, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking, 7, 0, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_booking_section_repeat1, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_booking_section_repeat1, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking_header, 6, 0, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking_header, 6, 0, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_booking, 9, 0, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_booking, 9, 0, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 4, 0, 1),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
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
