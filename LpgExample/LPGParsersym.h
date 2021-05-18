#pragma once
 #include <vector>
#include<string>
  struct LPGParsersym {
     typedef  unsigned char byte;
      static constexpr int
      TK_EQUIVALENCE = 4,
      TK_PRIORITY_EQUIVALENCE = 5,
      TK_ARROW = 6,
      TK_PRIORITY_ARROW = 7,
      TK_OR_MARKER = 14,
      TK_EQUAL = 38,
      TK_COMMA = 37,
      TK_LEFT_PAREN = 39,
      TK_RIGHT_PAREN = 40,
      TK_LEFT_BRACKET = 42,
      TK_RIGHT_BRACKET = 43,
      TK_SHARP = 44,
      TK_ALIAS_KEY = 15,
      TK_AST_KEY = 16,
      TK_DEFINE_KEY = 17,
      TK_DISJOINTPREDECESSORSETS_KEY = 18,
      TK_DROPRULES_KEY = 19,
      TK_DROPSYMBOLS_KEY = 20,
      TK_EMPTY_KEY = 12,
      TK_END_KEY = 3,
      TK_ERROR_KEY = 9,
      TK_EOL_KEY = 10,
      TK_EOF_KEY = 13,
      TK_EXPORT_KEY = 21,
      TK_GLOBALS_KEY = 22,
      TK_HEADERS_KEY = 23,
      TK_IDENTIFIER_KEY = 11,
      TK_IMPORT_KEY = 24,
      TK_INCLUDE_KEY = 25,
      TK_KEYWORDS_KEY = 26,
      TK_NAMES_KEY = 27,
      TK_NOTICE_KEY = 28,
      TK_OPTIONS_KEY = 41,
      TK_RECOVER_KEY = 29,
      TK_RULES_KEY = 30,
      TK_SOFT_KEYWORDS_KEY = 31,
      TK_START_KEY = 32,
      TK_TERMINALS_KEY = 33,
      TK_TRAILERS_KEY = 34,
      TK_TYPES_KEY = 35,
      TK_EOF_TOKEN = 36,
      TK_SINGLE_LINE_COMMENT = 45,
      TK_MACRO_NAME = 2,
      TK_SYMBOL = 1,
      TK_BLOCK = 8,
      TK_VBAR = 46,
      TK_ERROR_TOKEN = 47;

      inline const static std::vector<std::wstring> orderedTerminalSymbols = {
                 L"",
                 L"SYMBOL",
                 L"MACRO_NAME",
                 L"END_KEY",
                 L"EQUIVALENCE",
                 L"PRIORITY_EQUIVALENCE",
                 L"ARROW",
                 L"PRIORITY_ARROW",
                 L"BLOCK",
                 L"ERROR_KEY",
                 L"EOL_KEY",
                 L"IDENTIFIER_KEY",
                 L"EMPTY_KEY",
                 L"EOF_KEY",
                 L"OR_MARKER",
                 L"ALIAS_KEY",
                 L"AST_KEY",
                 L"DEFINE_KEY",
                 L"DISJOINTPREDECESSORSETS_KEY",
                 L"DROPRULES_KEY",
                 L"DROPSYMBOLS_KEY",
                 L"EXPORT_KEY",
                 L"GLOBALS_KEY",
                 L"HEADERS_KEY",
                 L"IMPORT_KEY",
                 L"INCLUDE_KEY",
                 L"KEYWORDS_KEY",
                 L"NAMES_KEY",
                 L"NOTICE_KEY",
                 L"RECOVER_KEY",
                 L"RULES_KEY",
                 L"SOFT_KEYWORDS_KEY",
                 L"START_KEY",
                 L"TERMINALS_KEY",
                 L"TRAILERS_KEY",
                 L"TYPES_KEY",
                 L"EOF_TOKEN",
                 L"COMMA",
                 L"EQUAL",
                 L"LEFT_PAREN",
                 L"RIGHT_PAREN",
                 L"OPTIONS_KEY",
                 L"LEFT_BRACKET",
                 L"RIGHT_BRACKET",
                 L"SHARP",
                 L"SINGLE_LINE_COMMENT",
                 L"VBAR",
                 L"ERROR_TOKEN"
             };

     static constexpr  int numTokenKinds = 48;
     static constexpr  bool isValidForParser = true;
};