{
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system}; in
      rec {

        devShell = pkgs.mkShell {
          buildInputs = with pkgs; [ nodejs tree-sitter ];
          shellHook = ''
            export PATH=$PATH:$(pwd)/node_modules/.bin
          '';
        };

      });
}
