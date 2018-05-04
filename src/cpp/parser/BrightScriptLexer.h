
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  BrightScriptLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, AS = 2, BOOLEAN = 3, BOX = 4, CREATEOBJECT = 5, DIM = 6, DOUBLE = 7, 
    DYNAMIC = 8, EACH = 9, ELSE = 10, ELSEIF = 11, END = 12, ENDFUNCTION = 13, 
    ENDIF = 14, ENDSUB = 15, ENDWHILE = 16, EXIT = 17, EXITWHILE = 18, EVAL = 19, 
    FALSE = 20, FLOAT = 21, FOR = 22, FUNCTION = 23, GETGLOBALAA = 24, GETLASTRUNCOMPILEERROR = 25, 
    GETLASTRUNRUNTIMEERROR = 26, GOTO = 27, IF = 28, IN = 29, INTEGER = 30, 
    INTERFACE = 31, INVALID = 32, LET = 33, LIBRARY = 34, LINE_NUM = 35, 
    MOD = 36, NEXT = 37, NOT = 38, OBJECT = 39, OBJFUN = 40, OR = 41, POS = 42, 
    PRINT = 43, REM = 44, RETURN = 45, RUN = 46, STEP = 47, STOP = 48, STRING = 49, 
    SUB = 50, TAB = 51, THEN = 52, TO = 53, TRUE = 54, VOID = 55, TYPE = 56, 
    WHILE = 57, STRING_LITERAL = 58, INT_LITERAL = 59, FLOAT_LITERAL = 60, 
    IDENTIFIER = 61, IDENTIFIER_TYPE_DECLARATION = 62, COMMENT = 63, NEWLINE = 64, 
    WS = 65, CONDITIONAL_CONST = 66, CONDITIONAL_ELSE = 67, CONDITIONAL_ELSEIF = 68, 
    CONDITIONAL_ENDIF = 69, CONDITIONAL_ERROR = 70, CONDITIONAL_IF = 71, 
    SINGLE_QUOTE = 72, QUESTION_MARK = 73, ATTRIBUTE_OPERATOR = 74, INCREMENT = 75, 
    DECREMENT = 76, OPEN_BRACKET = 77, CLOSE_BRACKET = 78, OPEN_BRACE = 79, 
    CLOSE_BRACE = 80, OPEN_PARENTHESIS = 81, CLOSE_PARENTHESIS = 82, COMMA = 83, 
    SEMICOLON = 84, COLON = 85, EQUALS = 86, DOT = 87, ADD = 88, SUBTRACT = 89, 
    MULTIPLY = 90, DIVIDE = 91, DIVIDE_INTEGER = 92, BITSHIFT_LEFT = 93, 
    BITSHIFT_RIGHT = 94, GREATER_THAN = 95, LESS_THAN = 96, GREATER_THAN_OR_EQUAL = 97, 
    LESS_THAN_OR_EQUAL = 98, NOT_EQUAL = 99, ASSIGNMENT_ADD = 100, ASSIGNMENT_SUBTRACT = 101, 
    ASSIGNMENT_MULTIPLY = 102, ASSIGNMENT_DIVIDE = 103, ASSIGNMENT_DIVIDE_INTEGER = 104, 
    ASSIGNMENT_BITSHIFT_LEFT = 105, ASSIGNMENT_BITSHIFT_RIGHT = 106
  };

  BrightScriptLexer(antlr4::CharStream *input);
  ~BrightScriptLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

