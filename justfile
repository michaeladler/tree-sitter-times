default: generate test

generate:
    tree-sitter generate --abi=14

test:
    tree-sitter test
