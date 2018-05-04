
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "BrightScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BrightScriptParser.
 */
class  BrightScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BrightScriptParser.
   */
    virtual antlrcpp::Any visitStartRule(BrightScriptParser::StartRuleContext *context) = 0;

    virtual antlrcpp::Any visitComponent(BrightScriptParser::ComponentContext *context) = 0;

    virtual antlrcpp::Any visitComponentHead(BrightScriptParser::ComponentHeadContext *context) = 0;

    virtual antlrcpp::Any visitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *context) = 0;

    virtual antlrcpp::Any visitComponentBody(BrightScriptParser::ComponentBodyContext *context) = 0;

    virtual antlrcpp::Any visitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(BrightScriptParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitBlockStatement(BrightScriptParser::BlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitArrayInitializer(BrightScriptParser::ArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *context) = 0;

    virtual antlrcpp::Any visitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitDimStatement(BrightScriptParser::DimStatementContext *context) = 0;

    virtual antlrcpp::Any visitEndStatement(BrightScriptParser::EndStatementContext *context) = 0;

    virtual antlrcpp::Any visitExitStatement(BrightScriptParser::ExitStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(BrightScriptParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitForEachStatement(BrightScriptParser::ForEachStatementContext *context) = 0;

    virtual antlrcpp::Any visitGotoStatement(BrightScriptParser::GotoStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfBlockStatement(BrightScriptParser::IfBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *context) = 0;

    virtual antlrcpp::Any visitLabelStatement(BrightScriptParser::LabelStatementContext *context) = 0;

    virtual antlrcpp::Any visitLibraryStatement(BrightScriptParser::LibraryStatementContext *context) = 0;

    virtual antlrcpp::Any visitNextStatement(BrightScriptParser::NextStatementContext *context) = 0;

    virtual antlrcpp::Any visitPrintStatement(BrightScriptParser::PrintStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(BrightScriptParser::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitStopStatement(BrightScriptParser::StopStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(BrightScriptParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSubDeclaration(BrightScriptParser::SubDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitParameterList(BrightScriptParser::ParameterListContext *context) = 0;

    virtual antlrcpp::Any visitParameter(BrightScriptParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitBaseType(BrightScriptParser::BaseTypeContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(BrightScriptParser::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitExpression(BrightScriptParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *context) = 0;

    virtual antlrcpp::Any visitGlobalFunction(BrightScriptParser::GlobalFunctionContext *context) = 0;

    virtual antlrcpp::Any visitPrimary(BrightScriptParser::PrimaryContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(BrightScriptParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitAssignableExpression(BrightScriptParser::AssignableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNumberLiteral(BrightScriptParser::NumberLiteralContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(BrightScriptParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(BrightScriptParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitInvalidLiteral(BrightScriptParser::InvalidLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(BrightScriptParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitReservedWord(BrightScriptParser::ReservedWordContext *context) = 0;

    virtual antlrcpp::Any visitComment(BrightScriptParser::CommentContext *context) = 0;

    virtual antlrcpp::Any visitEndOfLine(BrightScriptParser::EndOfLineContext *context) = 0;

    virtual antlrcpp::Any visitEndOfStatement(BrightScriptParser::EndOfStatementContext *context) = 0;


};

