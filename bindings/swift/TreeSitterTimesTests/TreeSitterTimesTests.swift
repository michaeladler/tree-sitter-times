import XCTest
import SwiftTreeSitter
import TreeSitterTimes

final class TreeSitterTimesTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_times())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Times grammar")
    }
}
