
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  BrightScriptParser : public antlr4::Parser {
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

  enum {
    RuleStartRule = 0, RuleComponent = 1, RuleComponentHead = 2, RuleComponentHeadElement = 3, 
    RuleComponentBody = 4, RuleComponentBodyElement = 5, RuleBlock = 6, 
    RuleBlockStatement = 7, RuleArrayInitializer = 8, RuleAssociativeArrayInitializer = 9, 
    RuleAssociativeElementInitializer = 10, RuleConditionalCompilationStatement = 11, 
    RuleConditionalCompilationConstStatement = 12, RuleConditionalCompilationErrorStatement = 13, 
    RuleConditionalCompilationIfThenElseStatement = 14, RuleConditionalCompilationIfBlockStatement = 15, 
    RuleConditionalCompilationIfElseIfBlockStatement = 16, RuleConditionalCompilationIfElseBlockStatement = 17, 
    RuleDimStatement = 18, RuleEndStatement = 19, RuleExitStatement = 20, 
    RuleForStatement = 21, RuleForEachStatement = 22, RuleGotoStatement = 23, 
    RuleIfThenElseStatement = 24, RuleIfSingleLineStatement = 25, RuleIfBlockStatement = 26, 
    RuleIfElseIfBlockStatement = 27, RuleIfElseBlockStatement = 28, RuleLabelStatement = 29, 
    RuleLibraryStatement = 30, RuleNextStatement = 31, RulePrintStatement = 32, 
    RuleReturnStatement = 33, RuleStopStatement = 34, RuleWhileStatement = 35, 
    RuleAnonymousFunctionDeclaration = 36, RuleFunctionDeclaration = 37, 
    RuleAnonymousSubDeclaration = 38, RuleSubDeclaration = 39, RuleParameterList = 40, 
    RuleParameter = 41, RuleBaseType = 42, RuleExpressionList = 43, RuleExpression = 44, 
    RuleGlobalFunctionInvocation = 45, RuleGlobalFunction = 46, RulePrimary = 47, 
    RuleLiteral = 48, RuleAssignableExpression = 49, RuleNumberLiteral = 50, 
    RuleStringLiteral = 51, RuleBooleanLiteral = 52, RuleInvalidLiteral = 53, 
    RuleIdentifier = 54, RuleUntypedIdentifier = 55, RuleReservedWord = 56, 
    RuleComment = 57, RuleEndOfLine = 58, RuleEndOfStatement = 59
  };

  BrightScriptParser(antlr4::TokenStream *input);
  ~BrightScriptParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StartRuleContext;
  class ComponentContext;
  class ComponentHeadContext;
  class ComponentHeadElementContext;
  class ComponentBodyContext;
  class ComponentBodyElementContext;
  class BlockContext;
  class BlockStatementContext;
  class ArrayInitializerContext;
  class AssociativeArrayInitializerContext;
  class AssociativeElementInitializerContext;
  class ConditionalCompilationStatementContext;
  class ConditionalCompilationConstStatementContext;
  class ConditionalCompilationErrorStatementContext;
  class ConditionalCompilationIfThenElseStatementContext;
  class ConditionalCompilationIfBlockStatementContext;
  class ConditionalCompilationIfElseIfBlockStatementContext;
  class ConditionalCompilationIfElseBlockStatementContext;
  class DimStatementContext;
  class EndStatementContext;
  class ExitStatementContext;
  class ForStatementContext;
  class ForEachStatementContext;
  class GotoStatementContext;
  class IfThenElseStatementContext;
  class IfSingleLineStatementContext;
  class IfBlockStatementContext;
  class IfElseIfBlockStatementContext;
  class IfElseBlockStatementContext;
  class LabelStatementContext;
  class LibraryStatementContext;
  class NextStatementContext;
  class PrintStatementContext;
  class ReturnStatementContext;
  class StopStatementContext;
  class WhileStatementContext;
  class AnonymousFunctionDeclarationContext;
  class FunctionDeclarationContext;
  class AnonymousSubDeclarationContext;
  class SubDeclarationContext;
  class ParameterListContext;
  class ParameterContext;
  class BaseTypeContext;
  class ExpressionListContext;
  class ExpressionContext;
  class GlobalFunctionInvocationContext;
  class GlobalFunctionContext;
  class PrimaryContext;
  class LiteralContext;
  class AssignableExpressionContext;
  class NumberLiteralContext;
  class StringLiteralContext;
  class BooleanLiteralContext;
  class InvalidLiteralContext;
  class IdentifierContext;
  class UntypedIdentifierContext;
  class ReservedWordContext;
  class CommentContext;
  class EndOfLineContext;
  class EndOfStatementContext; 

  class  StartRuleContext : public antlr4::ParserRuleContext {
  public:
    StartRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentContext *component();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartRuleContext* startRule();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentBodyContext *componentBody();
    std::vector<ComponentHeadContext *> componentHead();
    ComponentHeadContext* componentHead(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentContext* component();

  class  ComponentHeadContext : public antlr4::ParserRuleContext {
  public:
    ComponentHeadContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentHeadElementContext *> componentHeadElement();
    ComponentHeadElementContext* componentHeadElement(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentHeadContext* componentHead();

  class  ComponentHeadElementContext : public antlr4::ParserRuleContext {
  public:
    ComponentHeadElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LibraryStatementContext *libraryStatement();
    ConditionalCompilationStatementContext *conditionalCompilationStatement();
    CommentContext *comment();
    ComponentBodyContext *componentBody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentHeadElementContext* componentHeadElement();

  class  ComponentBodyContext : public antlr4::ParserRuleContext {
  public:
    ComponentBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ComponentBodyElementContext *> componentBodyElement();
    ComponentBodyElementContext* componentBodyElement(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentBodyContext* componentBody();

  class  ComponentBodyElementContext : public antlr4::ParserRuleContext {
  public:
    ComponentBodyElementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionDeclarationContext *functionDeclaration();
    SubDeclarationContext *subDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComponentBodyElementContext* componentBodyElement();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    ConditionalCompilationStatementContext *conditionalCompilationStatement();
    DimStatementContext *dimStatement();
    ExitStatementContext *exitStatement();
    ForStatementContext *forStatement();
    ForEachStatementContext *forEachStatement();
    IfThenElseStatementContext *ifThenElseStatement();
    GotoStatementContext *gotoStatement();
    LabelStatementContext *labelStatement();
    NextStatementContext *nextStatement();
    PrintStatementContext *printStatement();
    ReturnStatementContext *returnStatement();
    StopStatementContext *stopStatement();
    WhileStatementContext *whileStatement();
    EndStatementContext *endStatement();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  ArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<ArrayInitializerContext *> arrayInitializer();
    ArrayInitializerContext* arrayInitializer(size_t i);
    std::vector<AssociativeArrayInitializerContext *> associativeArrayInitializer();
    AssociativeArrayInitializerContext* associativeArrayInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayInitializerContext* arrayInitializer();

  class  AssociativeArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    AssociativeArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_BRACE();
    antlr4::tree::TerminalNode *CLOSE_BRACE();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    std::vector<AssociativeElementInitializerContext *> associativeElementInitializer();
    AssociativeElementInitializerContext* associativeElementInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<EndOfLineContext *> endOfLine();
    EndOfLineContext* endOfLine(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssociativeArrayInitializerContext* associativeArrayInitializer();

  class  AssociativeElementInitializerContext : public antlr4::ParserRuleContext {
  public:
    AssociativeElementInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    AssignableExpressionContext *assignableExpression();
    IdentifierContext *identifier();
    ReservedWordContext *reservedWord();
    StringLiteralContext *stringLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssociativeElementInitializerContext* associativeElementInitializer();

  class  ConditionalCompilationStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalCompilationConstStatementContext *conditionalCompilationConstStatement();
    ConditionalCompilationErrorStatementContext *conditionalCompilationErrorStatement();
    ConditionalCompilationIfThenElseStatementContext *conditionalCompilationIfThenElseStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationStatementContext* conditionalCompilationStatement();

  class  ConditionalCompilationConstStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationConstStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_CONST();
    UntypedIdentifierContext *untypedIdentifier();
    antlr4::tree::TerminalNode *EQUALS();
    ExpressionContext *expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationConstStatementContext* conditionalCompilationConstStatement();

  class  ConditionalCompilationErrorStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationErrorStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_ERROR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationErrorStatementContext* conditionalCompilationErrorStatement();

  class  ConditionalCompilationIfThenElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationIfThenElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalCompilationIfBlockStatementContext *conditionalCompilationIfBlockStatement();
    antlr4::tree::TerminalNode *CONDITIONAL_ENDIF();
    std::vector<ConditionalCompilationIfElseIfBlockStatementContext *> conditionalCompilationIfElseIfBlockStatement();
    ConditionalCompilationIfElseIfBlockStatementContext* conditionalCompilationIfElseIfBlockStatement(size_t i);
    ConditionalCompilationIfElseBlockStatementContext *conditionalCompilationIfElseBlockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationIfThenElseStatementContext* conditionalCompilationIfThenElseStatement();

  class  ConditionalCompilationIfBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationIfBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<ComponentBodyContext *> componentBody();
    ComponentBodyContext* componentBody(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationIfBlockStatementContext* conditionalCompilationIfBlockStatement();

  class  ConditionalCompilationIfElseIfBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationIfElseIfBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_ELSEIF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<ComponentBodyContext *> componentBody();
    ComponentBodyContext* componentBody(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationIfElseIfBlockStatementContext* conditionalCompilationIfElseIfBlockStatement();

  class  ConditionalCompilationIfElseBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    ConditionalCompilationIfElseBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITIONAL_ELSE();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    std::vector<ComponentBodyContext *> componentBody();
    ComponentBodyContext* componentBody(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalCompilationIfElseBlockStatementContext* conditionalCompilationIfElseBlockStatement();

  class  DimStatementContext : public antlr4::ParserRuleContext {
  public:
    DimStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIM();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimStatementContext* dimStatement();

  class  EndStatementContext : public antlr4::ParserRuleContext {
  public:
    EndStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndStatementContext* endStatement();

  class  ExitStatementContext : public antlr4::ParserRuleContext {
  public:
    ExitStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *EXITWHILE();
    antlr4::tree::TerminalNode *FOR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExitStatementContext* exitStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUALS();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STEP();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    NextStatementContext *nextStatement();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  ForEachStatementContext : public antlr4::ParserRuleContext {
  public:
    ForEachStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FOR();
    antlr4::tree::TerminalNode* FOR(size_t i);
    antlr4::tree::TerminalNode *EACH();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *IN();
    ExpressionContext *expression();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    NextStatementContext *nextStatement();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForEachStatementContext* forEachStatement();

  class  GotoStatementContext : public antlr4::ParserRuleContext {
  public:
    GotoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GotoStatementContext* gotoStatement();

  class  IfThenElseStatementContext : public antlr4::ParserRuleContext {
  public:
    IfThenElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfSingleLineStatementContext *ifSingleLineStatement();
    IfBlockStatementContext *ifBlockStatement();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ENDIF();
    std::vector<IfElseIfBlockStatementContext *> ifElseIfBlockStatement();
    IfElseIfBlockStatementContext* ifElseIfBlockStatement(size_t i);
    IfElseBlockStatementContext *ifElseBlockStatement();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfThenElseStatementContext* ifThenElseStatement();

  class  IfSingleLineStatementContext : public antlr4::ParserRuleContext {
  public:
    IfSingleLineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *ELSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfSingleLineStatementContext* ifSingleLineStatement();

  class  IfBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    IfBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *THEN();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfBlockStatementContext* ifBlockStatement();

  class  IfElseIfBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    IfElseIfBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *THEN();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseIfBlockStatementContext* ifElseIfBlockStatement();

  class  IfElseBlockStatementContext : public antlr4::ParserRuleContext {
  public:
    IfElseBlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ELSE();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfElseBlockStatementContext* ifElseBlockStatement();

  class  LabelStatementContext : public antlr4::ParserRuleContext {
  public:
    LabelStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelStatementContext* labelStatement();

  class  LibraryStatementContext : public antlr4::ParserRuleContext {
  public:
    LibraryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LIBRARY();
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LibraryStatementContext* libraryStatement();

  class  NextStatementContext : public antlr4::ParserRuleContext {
  public:
    NextStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NextStatementContext* nextStatement();

  class  PrintStatementContext : public antlr4::ParserRuleContext {
  public:
    PrintStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *QUESTION_MARK();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMICOLON();
    antlr4::tree::TerminalNode* SEMICOLON(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrintStatementContext* printStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    AssignableExpressionContext *assignableExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  StopStatementContext : public antlr4::ParserRuleContext {
  public:
    StopStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STOP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StopStatementContext* stopStatement();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WHILE();
    antlr4::tree::TerminalNode* WHILE(size_t i);
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *ENDWHILE();
    antlr4::tree::TerminalNode *END();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  AnonymousFunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnonymousFunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FUNCTION();
    antlr4::tree::TerminalNode* FUNCTION(size_t i);
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *END();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *AS();
    BaseTypeContext *baseType();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnonymousFunctionDeclarationContext* anonymousFunctionDeclaration();

  class  FunctionDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FunctionDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FUNCTION();
    antlr4::tree::TerminalNode* FUNCTION(size_t i);
    UntypedIdentifierContext *untypedIdentifier();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *END();
    ParameterListContext *parameterList();
    antlr4::tree::TerminalNode *AS();
    BaseTypeContext *baseType();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDeclarationContext* functionDeclaration();

  class  AnonymousSubDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnonymousSubDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);
    antlr4::tree::TerminalNode *ENDSUB();
    antlr4::tree::TerminalNode *END();
    ParameterListContext *parameterList();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnonymousSubDeclarationContext* anonymousSubDeclaration();

  class  SubDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SubDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SUB();
    antlr4::tree::TerminalNode* SUB(size_t i);
    UntypedIdentifierContext *untypedIdentifier();
    antlr4::tree::TerminalNode *ENDSUB();
    antlr4::tree::TerminalNode *END();
    ParameterListContext *parameterList();
    std::vector<EndOfStatementContext *> endOfStatement();
    EndOfStatementContext* endOfStatement(size_t i);
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubDeclarationContext* subDeclaration();

  class  ParameterListContext : public antlr4::ParserRuleContext {
  public:
    ParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    std::vector<ParameterContext *> parameter();
    ParameterContext* parameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterListContext* parameterList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *EQUALS();
    AssignableExpressionContext *assignableExpression();
    antlr4::tree::TerminalNode *AS();
    BaseTypeContext *baseType();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  BaseTypeContext : public antlr4::ParserRuleContext {
  public:
    BaseTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *DOUBLE();
    antlr4::tree::TerminalNode *DYNAMIC();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *OBJECT();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *VOID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseTypeContext* baseType();

  class  ExpressionListContext : public antlr4::ParserRuleContext {
  public:
    ExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<AssociativeArrayInitializerContext *> associativeArrayInitializer();
    AssociativeArrayInitializerContext* associativeArrayInitializer(size_t i);
    std::vector<ArrayInitializerContext *> arrayInitializer();
    ArrayInitializerContext* arrayInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionListContext* expressionList();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    GlobalFunctionInvocationContext *globalFunctionInvocation();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUBTRACT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *MULTIPLY();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *DIVIDE_INTEGER();
    antlr4::tree::TerminalNode *BITSHIFT_LEFT();
    antlr4::tree::TerminalNode *BITSHIFT_RIGHT();
    antlr4::tree::TerminalNode *GREATER_THAN();
    antlr4::tree::TerminalNode *LESS_THAN();
    antlr4::tree::TerminalNode *EQUALS();
    antlr4::tree::TerminalNode *NOT_EQUAL();
    antlr4::tree::TerminalNode *GREATER_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *LESS_THAN_OR_EQUAL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *ATTRIBUTE_OPERATOR();
    IdentifierContext *identifier();
    ReservedWordContext *reservedWord();
    antlr4::tree::TerminalNode *OPEN_BRACKET();
    antlr4::tree::TerminalNode *CLOSE_BRACKET();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    ExpressionListContext *expressionList();
    antlr4::tree::TerminalNode *INCREMENT();
    antlr4::tree::TerminalNode *DECREMENT();
    AssignableExpressionContext *assignableExpression();
    antlr4::tree::TerminalNode *ASSIGNMENT_ADD();
    antlr4::tree::TerminalNode *ASSIGNMENT_SUBTRACT();
    antlr4::tree::TerminalNode *ASSIGNMENT_MULTIPLY();
    antlr4::tree::TerminalNode *ASSIGNMENT_DIVIDE();
    antlr4::tree::TerminalNode *ASSIGNMENT_DIVIDE_INTEGER();
    antlr4::tree::TerminalNode *ASSIGNMENT_BITSHIFT_LEFT();
    antlr4::tree::TerminalNode *ASSIGNMENT_BITSHIFT_RIGHT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();
  ExpressionContext* expression(int precedence);
  class  GlobalFunctionInvocationContext : public antlr4::ParserRuleContext {
  public:
    GlobalFunctionInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GlobalFunctionContext *globalFunction();
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    ExpressionListContext *expressionList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalFunctionInvocationContext* globalFunctionInvocation();

  class  GlobalFunctionContext : public antlr4::ParserRuleContext {
  public:
    GlobalFunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CREATEOBJECT();
    antlr4::tree::TerminalNode *EVAL();
    antlr4::tree::TerminalNode *GETLASTRUNCOMPILEERROR();
    antlr4::tree::TerminalNode *GETGLOBALAA();
    antlr4::tree::TerminalNode *GETLASTRUNRUNTIMEERROR();
    antlr4::tree::TerminalNode *RUN();
    antlr4::tree::TerminalNode *STRING();
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *TYPE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GlobalFunctionContext* globalFunction();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPEN_PARENTHESIS();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *CLOSE_PARENTHESIS();
    LiteralContext *literal();
    IdentifierContext *identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumberLiteralContext *numberLiteral();
    StringLiteralContext *stringLiteral();
    BooleanLiteralContext *booleanLiteral();
    InvalidLiteralContext *invalidLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  AssignableExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignableExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArrayInitializerContext *arrayInitializer();
    AssociativeArrayInitializerContext *associativeArrayInitializer();
    AnonymousFunctionDeclarationContext *anonymousFunctionDeclaration();
    AnonymousSubDeclarationContext *anonymousSubDeclaration();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignableExpressionContext* assignableExpression();

  class  NumberLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumberLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LITERAL();
    antlr4::tree::TerminalNode *FLOAT_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberLiteralContext* numberLiteral();

  class  StringLiteralContext : public antlr4::ParserRuleContext {
  public:
    StringLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringLiteralContext* stringLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  InvalidLiteralContext : public antlr4::ParserRuleContext {
  public:
    InvalidLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVALID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InvalidLiteralContext* invalidLiteral();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *IDENTIFIER_TYPE_DECLARATION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  UntypedIdentifierContext : public antlr4::ParserRuleContext {
  public:
    UntypedIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UntypedIdentifierContext* untypedIdentifier();

  class  ReservedWordContext : public antlr4::ParserRuleContext {
  public:
    ReservedWordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *BOX();
    antlr4::tree::TerminalNode *CREATEOBJECT();
    antlr4::tree::TerminalNode *DIM();
    antlr4::tree::TerminalNode *EACH();
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *ELSEIF();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *ENDFUNCTION();
    antlr4::tree::TerminalNode *ENDIF();
    antlr4::tree::TerminalNode *ENDSUB();
    antlr4::tree::TerminalNode *ENDWHILE();
    antlr4::tree::TerminalNode *EVAL();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *EXITWHILE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *FUNCTION();
    antlr4::tree::TerminalNode *GETGLOBALAA();
    antlr4::tree::TerminalNode *GETLASTRUNCOMPILEERROR();
    antlr4::tree::TerminalNode *GETLASTRUNRUNTIMEERROR();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *INVALID();
    antlr4::tree::TerminalNode *LET();
    antlr4::tree::TerminalNode *LINE_NUM();
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *OBJFUN();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *POS();
    antlr4::tree::TerminalNode *PRINT();
    antlr4::tree::TerminalNode *REM();
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *RUN();
    antlr4::tree::TerminalNode *STEP();
    antlr4::tree::TerminalNode *STOP();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *TAB();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *WHILE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReservedWordContext* reservedWord();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  EndOfLineContext : public antlr4::ParserRuleContext {
  public:
    EndOfLineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);
    CommentContext *comment();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndOfLineContext* endOfLine();

  class  EndOfStatementContext : public antlr4::ParserRuleContext {
  public:
    EndOfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EndOfLineContext *endOfLine();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> NEWLINE();
    antlr4::tree::TerminalNode* NEWLINE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EndOfStatementContext* endOfStatement();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool expressionSempred(ExpressionContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

