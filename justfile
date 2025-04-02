default: generate test

generate:
    tree-sitter generate --abi=15

test:
    tree-sitter test
