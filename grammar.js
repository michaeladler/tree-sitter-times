const STAR = /\*/;
const SPACE = /[ ]/;
const MINUS = /[-]/;
const DOT = /\./;
const NEWLINE = /\n/;

module.exports = grammar({
  name: "times",

  extras: ($) => [/\s/, $.line_comment],

  inline: ($) => [$.line_comment],

  rules: {
    document: ($) => repeat(choice($.role, $.booking_section)),

    // Urlaub UPSTD-BA Have a good one!
    role: ($) =>
      seq(
        field("role_alias", $.alias),
        field("role_project", $.project),
        optional(
          seq($._ws1, optional(field("role_description", $.description))),
        ),
      ),

    alias: ($) => /[a-zA-Z0-9_-]+/,

    project: ($) => /[a-zA-Z0-9][a-zA-Z0-9_-]*/,

    // Always immediate: a description may only follow `_ws1` on the same line,
    // never across a line break (`extras` would otherwise skip the newline).
    description: ($) => token.immediate(/[^\n]+/),

    booking_section: ($) => seq($.booking_header, repeat($.booking)),

    booking_header: ($) =>
      seq(
        STAR,
        SPACE,
        field("weekday", $.weekday),
        DOT,
        SPACE,
        field("date", $.date),
      ),

    weekday: ($) => /[a-zA-Z]+/,

    date: ($) => /[0-9\/\.-]+/,

    booking: ($) =>
      seq(
        field("booking_start", $.time),
        SPACE,
        MINUS,
        SPACE,
        field("booking_end", $.time),
        SPACE,
        field("booking_alias", $.alias),
        optional(
          seq($._ws1, optional(field("booking_description", $.description))),
        ),
        NEWLINE,
      ),

    time: ($) => /[0-9]{1,2}:[0-9]{1,2}/,

    line_comment: ($) => seq("#", /[^\n]*/),

    // Horizontal whitespace that must directly follow the previous token, so it
    // can never be satisfied by whitespace on a following line.
    _ws1: ($) => token.immediate(/[ \t]+/),
  },
});
