# tree-sitter-times

Times grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

## Installation

### nvim

Add the following to your Lua configuration:

```lua
vim.api.nvim_create_autocmd("User", {
    pattern = 'TSUpdate',
    callback = function()
        require('nvim-treesitter.parsers').times = {
            install_info = {
                url = 'https://github.com/michaeladler/tree-sitter-times',
                generate = false,
                generate_from_json = false,
                queries = 'queries/times'
            },
        }
    end,
})

vim.treesitter.language.register("times", { "times" })

vim.api.nvim_create_autocmd({"BufNewFile", "BufRead"}, {
  pattern = "*.times",
  callback = function()
    vim.bo.filetype = "times"
  end,
})

vim.api.nvim_create_autocmd('FileType', {
  pattern = { 'times' },
  callback = function() vim.treesitter.start() end,
})
```

Then run `TSUpdate`.

## Development

```sh
npm run build
npm run test
```
