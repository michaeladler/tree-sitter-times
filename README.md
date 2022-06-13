# tree-sitter-times

Times grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Installation

### nvim

Using [packer](https://github.com/wbthomason/packer.nvim):

```lua
use({
    "michaeladler/tree-sitter-times",
    requires = { "nvim-treesitter/nvim-treesitter" },
    config = function()
        require("tree-sitter-times").setup()
    end,
})
```

Then run `TSInstall times`. 

## Development

```sh
npm run build
npm run test
```
