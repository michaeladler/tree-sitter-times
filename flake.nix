{
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs =
    { nixpkgs, ... }:
    let

      forAllSystems =
        function:
        nixpkgs.lib.genAttrs [
          "x86_64-linux"
          "aarch64-linux"
        ] (system: function nixpkgs.legacyPackages.${system});

    in
    {

      devShells = forAllSystems (pkgs: {
        default = pkgs.mkShell {

          nativeBuildInputs = [
            pkgs.git
            pkgs.just
            pkgs.cargo
            pkgs.nodejs
          ];

          buildInputs = [
            pkgs.tree-sitter
          ];

          shellHook = ''
            export PATH=$PATH:$(pwd)/node_modules/.bin
          '';
        };
      });

    };
}
