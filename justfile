default: generate test

generate:
    tree-sitter generate --abi=15
    # remove version from generated files
    sed -i -e 's@v[0-9]\+\(\.[0-9]\+\)\+\(.*\)@*/@' src/parser.c

test:
    tree-sitter test
