const STAR = /\*/;
const SPACE = /[ ]/;
const MINUS = /[-]/;
const DOT = /\./;

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
        $._ws1,
        field("role_description", $.description)
      ),

    alias: ($) => /[a-zA-Z][a-zA-Z0-9]*/,

    project: ($) => /[a-zA-Z][a-zA-Z0-9_-]*/,

    description: ($) => /[^\n]+/,

    booking_section: ($) => seq($.booking_header, repeat($.booking)),

    booking_header: ($) =>
      seq(
        STAR,
        SPACE,
        field("weekday", $.weekday),
        DOT,
        SPACE,
        field("date", $.date)
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
        optional(seq(SPACE, field("booking_description", $.description)))
      ),

    time: ($) => /[0-9]{1,2}:[0-9]{1,2}/,

    line_comment: ($) => seq("#", /.*/),

    _ws1: ($) => /\s+/,
  },
});
