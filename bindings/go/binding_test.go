package tree_sitter_times_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_times "git+github.com/michaeladler/tree-sitter-times.git/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_times.Language())
	if language == nil {
		t.Errorf("Error loading Times grammar")
	}
}
