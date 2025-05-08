// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTimes",
    products: [
        .library(name: "TreeSitterTimes", targets: ["TreeSitterTimes"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTimes",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTimesTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTimes",
            ],
            path: "bindings/swift/TreeSitterTimesTests"
        )
    ],
    cLanguageStandard: .c11
)
