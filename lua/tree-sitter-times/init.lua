-- taken from https://github.com/IndianBoy42/tree-sitter-just/blob/main/lua/tree-sitter-just/init.lua

local M = {}

local is_windows
if jit ~= nil then
	is_windows = jit.os == "Windows"
else
	is_windows = package.config:sub(1, 1) == "\\"
end
local get_separator = function()
	if is_windows then
		return "\\"
	end
	return "/"
end
local join_paths = function(...)
	local separator = get_separator()
	return table.concat({ ... }, separator)
end

local function script_path()
   local str = debug.getinfo(2, "S").source:sub(2)
   return str:match("(.*[/\\])")
end

function M.setup()
	local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
	parser_config.times = {
		install_info = {
			url = join_paths(script_path(), "..", ".."),
			files = { "src/parser.c" },
		},
	}
	local ok, ft = pcall(require, "filetype")
	if ok then
		ft.setup({
			overrides = {
				extensions = {
					times = "times",
				},
				literals = {
					["times"] = "times",
				},
			},
		})
	end
end

return M
