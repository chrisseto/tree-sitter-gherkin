module.exports = grammar({
  name: 'gherkin',

  extras: $ => [
    /[ \t]/
  ],

  conflicts: $ => [
    [$.feature],
    [$.scenario],
    [$.scenario_outline],
    [$.background],
    [$.examples]
  ],

  rules: {
    source_file: $ => repeat($._item),

    _item: $ => choice(
      $.feature,
      $.comment,
      $._newline
    ),

    _newline: $ => /\r?\n/,

    comment: $ => seq('#', /[^\r\n]*/, $._newline),

    feature: $ => seq(
      choice('Feature', 'Ability', 'Business Need'),
      ':',
      field('name', optional(/[^\r\n]*/)),
      $._newline,
      repeat($._feature_child)
    ),

    _feature_child: $ => choice(
      $.background,
      $.scenario,
      $.scenario_outline,
      $.comment,
      $._newline
    ),

    // Background
    background: $ => seq(
      'Background',
      ':',
      optional(/[^\r\n]*/),
      $._newline,
      repeat($._background_child)
    ),

    _background_child: $ => choice(
      $.step,
      $.comment,
      $._newline
    ),

    // Regular scenarios
    scenario: $ => seq(
      choice('Scenario', 'Example'),
      ':',
      optional(/[^\r\n]*/),
      $._newline,
      repeat($._scenario_child)
    ),

    _scenario_child: $ => choice(
      $.step,
      $.comment,
      $._newline
    ),

    // Scenario outlines
    scenario_outline: $ => seq(
      choice('Scenario Outline', 'Scenario Template'),
      ':',
      optional(/[^\r\n]*/),
      $._newline,
      repeat($._scenario_child),
      repeat1($.examples)
    ),

    // Examples section
    examples: $ => seq(
      'Examples',
      ':',
      optional(/[^\r\n]*/),
      $._newline,
      repeat(choice($.comment, $._newline)),
      optional($.data_table)
    ),

    // Steps with optional attachments
    step: $ => seq(
      choice('Given', 'When', 'Then', 'And', 'But', '*'),
      /[^\r\n]*/,
      $._newline,
      optional(choice(
        $.doc_string,
        $.data_table
      ))
    ),

    // Doc strings (multiline text blocks)
    doc_string: $ => seq(
      choice('"""', "'''"),
      optional(/[^\r\n]*/), // content type
      $._newline,
      repeat(seq(/[^\r\n]*/, $._newline)), // content lines
      choice('"""', "'''"),
      $._newline
    ),

    // Data tables
    data_table: $ => repeat1(seq(
      /\|[^|\r\n]*(\|[^|\r\n]*)*\|/,
      $._newline
    )),
  }
});