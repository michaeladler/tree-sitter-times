
default: build format test

build:
    tree-sitter generate

format:
    prettier -w src/grammar.json

test:
    tree-sitter test
