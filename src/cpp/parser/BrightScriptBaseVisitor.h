
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "BrightScriptVisitor.h"


/**
 * This class provides an empty implementation of BrightScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BrightScriptBaseVisitor : public BrightScriptVisitor {
public:

  virtual antlrcpp::Any visitStartRule(BrightScriptParser::StartRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponent(BrightScriptParser::ComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentHead(BrightScriptParser::ComponentHeadContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentBody(BrightScriptParser::ComponentBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(BrightScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlockStatement(BrightScriptParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDimStatement(BrightScriptParser::DimStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndStatement(BrightScriptParser::EndStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExitStatement(BrightScriptParser::ExitStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForStatement(BrightScriptParser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForEachStatement(BrightScriptParser::ForEachStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGotoStatement(BrightScriptParser::GotoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfBlockStatement(BrightScriptParser::IfBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabelStatement(BrightScriptParser::LabelStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLibraryStatement(BrightScriptParser::LibraryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNextStatement(BrightScriptParser::NextStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrintStatement(BrightScriptParser::PrintStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStopStatement(BrightScriptParser::StopStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(BrightScriptParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameterList(BrightScriptParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParameter(BrightScriptParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBaseType(BrightScriptParser::BaseTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(BrightScriptParser::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(BrightScriptParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGlobalFunction(BrightScriptParser::GlobalFunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrimary(BrightScriptParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(BrightScriptParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignableExpression(BrightScriptParser::AssignableExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumberLiteral(BrightScriptParser::NumberLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStringLiteral(BrightScriptParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanLiteral(BrightScriptParser::BooleanLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInvalidLiteral(BrightScriptParser::InvalidLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(BrightScriptParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReservedWord(BrightScriptParser::ReservedWordContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(BrightScriptParser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndOfLine(BrightScriptParser::EndOfLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEndOfStatement(BrightScriptParser::EndOfStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};

