
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
    LONGINTEGER = 31, INTERFACE = 32, INVALID = 33, LET = 34, LIBRARY = 35, 
    LINE_NUM = 36, MOD = 37, NEXT = 38, NOT = 39, OBJECT = 40, OBJFUN = 41, 
    OR = 42, POS = 43, PRINT = 44, REM = 45, RETURN = 46, RUN = 47, STEP = 48, 
    STOP = 49, STRING = 50, SUB = 51, TAB = 52, THEN = 53, TO = 54, TRUE = 55, 
    VOID = 56, TYPE = 57, WHILE = 58, STRING_LITERAL = 59, INT_LITERAL = 60, 
    FLOAT_LITERAL = 61, IDENTIFIER = 62, IDENTIFIER_TYPE_DECLARATION = 63, 
    COMMENT = 64, NEWLINE = 65, WS = 66, CONDITIONAL_CONST = 67, CONDITIONAL_ELSE = 68, 
    CONDITIONAL_ELSEIF = 69, CONDITIONAL_ENDIF = 70, CONDITIONAL_ERROR = 71, 
    CONDITIONAL_IF = 72, SINGLE_QUOTE = 73, QUESTION_MARK = 74, ATTRIBUTE_OPERATOR = 75, 
    INCREMENT = 76, DECREMENT = 77, OPEN_BRACKET = 78, CLOSE_BRACKET = 79, 
    OPEN_BRACE = 80, CLOSE_BRACE = 81, OPEN_PARENTHESIS = 82, CLOSE_PARENTHESIS = 83, 
    COMMA = 84, SEMICOLON = 85, COLON = 86, EQUALS = 87, DOT = 88, ADD = 89, 
    SUBTRACT = 90, MULTIPLY = 91, DIVIDE = 92, EXPONENT = 93, DIVIDE_INTEGER = 94, 
    BITSHIFT_LEFT = 95, BITSHIFT_RIGHT = 96, GREATER_THAN = 97, LESS_THAN = 98, 
    GREATER_THAN_OR_EQUAL = 99, LESS_THAN_OR_EQUAL = 100, NOT_EQUAL = 101, 
    ASSIGNMENT_ADD = 102, ASSIGNMENT_SUBTRACT = 103, ASSIGNMENT_MULTIPLY = 104, 
    ASSIGNMENT_DIVIDE = 105, ASSIGNMENT_DIVIDE_INTEGER = 106, ASSIGNMENT_BITSHIFT_LEFT = 107, 
    ASSIGNMENT_BITSHIFT_RIGHT = 108
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

