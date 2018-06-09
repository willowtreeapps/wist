
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "BrightScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BrightScriptParser.
 */
class  BrightScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStartRule(BrightScriptParser::StartRuleContext *ctx) = 0;
  virtual void exitStartRule(BrightScriptParser::StartRuleContext *ctx) = 0;

  virtual void enterComponent(BrightScriptParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(BrightScriptParser::ComponentContext *ctx) = 0;

  virtual void enterComponentHead(BrightScriptParser::ComponentHeadContext *ctx) = 0;
  virtual void exitComponentHead(BrightScriptParser::ComponentHeadContext *ctx) = 0;

  virtual void enterComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *ctx) = 0;
  virtual void exitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *ctx) = 0;

  virtual void enterComponentBody(BrightScriptParser::ComponentBodyContext *ctx) = 0;
  virtual void exitComponentBody(BrightScriptParser::ComponentBodyContext *ctx) = 0;

  virtual void enterComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *ctx) = 0;
  virtual void exitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *ctx) = 0;

  virtual void enterBlock(BrightScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(BrightScriptParser::BlockContext *ctx) = 0;

  virtual void enterBlockStatement(BrightScriptParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(BrightScriptParser::BlockStatementContext *ctx) = 0;

  virtual void enterArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) = 0;
  virtual void exitArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) = 0;

  virtual void enterAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) = 0;
  virtual void exitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) = 0;

  virtual void enterAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *ctx) = 0;
  virtual void exitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *ctx) = 0;

  virtual void enterConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *ctx) = 0;

  virtual void enterConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *ctx) = 0;
  virtual void exitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *ctx) = 0;

  virtual void enterDimStatement(BrightScriptParser::DimStatementContext *ctx) = 0;
  virtual void exitDimStatement(BrightScriptParser::DimStatementContext *ctx) = 0;

  virtual void enterEndStatement(BrightScriptParser::EndStatementContext *ctx) = 0;
  virtual void exitEndStatement(BrightScriptParser::EndStatementContext *ctx) = 0;

  virtual void enterExitStatement(BrightScriptParser::ExitStatementContext *ctx) = 0;
  virtual void exitExitStatement(BrightScriptParser::ExitStatementContext *ctx) = 0;

  virtual void enterForStatement(BrightScriptParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(BrightScriptParser::ForStatementContext *ctx) = 0;

  virtual void enterForEachStatement(BrightScriptParser::ForEachStatementContext *ctx) = 0;
  virtual void exitForEachStatement(BrightScriptParser::ForEachStatementContext *ctx) = 0;

  virtual void enterGotoStatement(BrightScriptParser::GotoStatementContext *ctx) = 0;
  virtual void exitGotoStatement(BrightScriptParser::GotoStatementContext *ctx) = 0;

  virtual void enterIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *ctx) = 0;
  virtual void exitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *ctx) = 0;

  virtual void enterIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *ctx) = 0;
  virtual void exitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *ctx) = 0;

  virtual void enterIfBlockStatement(BrightScriptParser::IfBlockStatementContext *ctx) = 0;
  virtual void exitIfBlockStatement(BrightScriptParser::IfBlockStatementContext *ctx) = 0;

  virtual void enterIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *ctx) = 0;
  virtual void exitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *ctx) = 0;

  virtual void enterIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *ctx) = 0;
  virtual void exitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *ctx) = 0;

  virtual void enterLabelStatement(BrightScriptParser::LabelStatementContext *ctx) = 0;
  virtual void exitLabelStatement(BrightScriptParser::LabelStatementContext *ctx) = 0;

  virtual void enterLibraryStatement(BrightScriptParser::LibraryStatementContext *ctx) = 0;
  virtual void exitLibraryStatement(BrightScriptParser::LibraryStatementContext *ctx) = 0;

  virtual void enterNextStatement(BrightScriptParser::NextStatementContext *ctx) = 0;
  virtual void exitNextStatement(BrightScriptParser::NextStatementContext *ctx) = 0;

  virtual void enterPrintStatement(BrightScriptParser::PrintStatementContext *ctx) = 0;
  virtual void exitPrintStatement(BrightScriptParser::PrintStatementContext *ctx) = 0;

  virtual void enterReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) = 0;

  virtual void enterStopStatement(BrightScriptParser::StopStatementContext *ctx) = 0;
  virtual void exitStopStatement(BrightScriptParser::StopStatementContext *ctx) = 0;

  virtual void enterWhileStatement(BrightScriptParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(BrightScriptParser::WhileStatementContext *ctx) = 0;

  virtual void enterAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *ctx) = 0;
  virtual void exitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *ctx) = 0;

  virtual void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) = 0;

  virtual void enterAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *ctx) = 0;
  virtual void exitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *ctx) = 0;

  virtual void enterSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) = 0;
  virtual void exitSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) = 0;

  virtual void enterParameterList(BrightScriptParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(BrightScriptParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(BrightScriptParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(BrightScriptParser::ParameterContext *ctx) = 0;

  virtual void enterBaseType(BrightScriptParser::BaseTypeContext *ctx) = 0;
  virtual void exitBaseType(BrightScriptParser::BaseTypeContext *ctx) = 0;

  virtual void enterExpressionList(BrightScriptParser::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(BrightScriptParser::ExpressionListContext *ctx) = 0;

  virtual void enterExpression(BrightScriptParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BrightScriptParser::ExpressionContext *ctx) = 0;

  virtual void enterGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *ctx) = 0;
  virtual void exitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *ctx) = 0;

  virtual void enterGlobalFunction(BrightScriptParser::GlobalFunctionContext *ctx) = 0;
  virtual void exitGlobalFunction(BrightScriptParser::GlobalFunctionContext *ctx) = 0;

  virtual void enterPrimary(BrightScriptParser::PrimaryContext *ctx) = 0;
  virtual void exitPrimary(BrightScriptParser::PrimaryContext *ctx) = 0;

  virtual void enterLiteral(BrightScriptParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(BrightScriptParser::LiteralContext *ctx) = 0;

  virtual void enterAssignableExpression(BrightScriptParser::AssignableExpressionContext *ctx) = 0;
  virtual void exitAssignableExpression(BrightScriptParser::AssignableExpressionContext *ctx) = 0;

  virtual void enterNumberLiteral(BrightScriptParser::NumberLiteralContext *ctx) = 0;
  virtual void exitNumberLiteral(BrightScriptParser::NumberLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(BrightScriptParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(BrightScriptParser::StringLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(BrightScriptParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(BrightScriptParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterInvalidLiteral(BrightScriptParser::InvalidLiteralContext *ctx) = 0;
  virtual void exitInvalidLiteral(BrightScriptParser::InvalidLiteralContext *ctx) = 0;

  virtual void enterIdentifier(BrightScriptParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(BrightScriptParser::IdentifierContext *ctx) = 0;

  virtual void enterUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *ctx) = 0;
  virtual void exitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *ctx) = 0;

  virtual void enterReservedWord(BrightScriptParser::ReservedWordContext *ctx) = 0;
  virtual void exitReservedWord(BrightScriptParser::ReservedWordContext *ctx) = 0;

  virtual void enterComment(BrightScriptParser::CommentContext *ctx) = 0;
  virtual void exitComment(BrightScriptParser::CommentContext *ctx) = 0;

  virtual void enterEndOfLine(BrightScriptParser::EndOfLineContext *ctx) = 0;
  virtual void exitEndOfLine(BrightScriptParser::EndOfLineContext *ctx) = 0;

  virtual void enterEndOfStatement(BrightScriptParser::EndOfStatementContext *ctx) = 0;
  virtual void exitEndOfStatement(BrightScriptParser::EndOfStatementContext *ctx) = 0;


};

