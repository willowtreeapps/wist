
// Generated from BrightScript.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "BrightScriptListener.h"


/**
 * This class provides an empty implementation of BrightScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BrightScriptBaseListener : public BrightScriptListener {
public:

  virtual void enterStartRule(BrightScriptParser::StartRuleContext * /*ctx*/) override { }
  virtual void exitStartRule(BrightScriptParser::StartRuleContext * /*ctx*/) override { }

  virtual void enterComponent(BrightScriptParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(BrightScriptParser::ComponentContext * /*ctx*/) override { }

  virtual void enterComponentHead(BrightScriptParser::ComponentHeadContext * /*ctx*/) override { }
  virtual void exitComponentHead(BrightScriptParser::ComponentHeadContext * /*ctx*/) override { }

  virtual void enterComponentHeadElement(BrightScriptParser::ComponentHeadElementContext * /*ctx*/) override { }
  virtual void exitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext * /*ctx*/) override { }

  virtual void enterComponentBody(BrightScriptParser::ComponentBodyContext * /*ctx*/) override { }
  virtual void exitComponentBody(BrightScriptParser::ComponentBodyContext * /*ctx*/) override { }

  virtual void enterComponentBodyElement(BrightScriptParser::ComponentBodyElementContext * /*ctx*/) override { }
  virtual void exitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext * /*ctx*/) override { }

  virtual void enterBlock(BrightScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(BrightScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterBlockStatement(BrightScriptParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(BrightScriptParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterArrayInitializer(BrightScriptParser::ArrayInitializerContext * /*ctx*/) override { }
  virtual void exitArrayInitializer(BrightScriptParser::ArrayInitializerContext * /*ctx*/) override { }

  virtual void enterAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext * /*ctx*/) override { }
  virtual void exitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext * /*ctx*/) override { }

  virtual void enterAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext * /*ctx*/) override { }
  virtual void exitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext * /*ctx*/) override { }

  virtual void enterConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext * /*ctx*/) override { }
  virtual void exitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext * /*ctx*/) override { }

  virtual void enterDimStatement(BrightScriptParser::DimStatementContext * /*ctx*/) override { }
  virtual void exitDimStatement(BrightScriptParser::DimStatementContext * /*ctx*/) override { }

  virtual void enterEndStatement(BrightScriptParser::EndStatementContext * /*ctx*/) override { }
  virtual void exitEndStatement(BrightScriptParser::EndStatementContext * /*ctx*/) override { }

  virtual void enterExitStatement(BrightScriptParser::ExitStatementContext * /*ctx*/) override { }
  virtual void exitExitStatement(BrightScriptParser::ExitStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(BrightScriptParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(BrightScriptParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterForEachStatement(BrightScriptParser::ForEachStatementContext * /*ctx*/) override { }
  virtual void exitForEachStatement(BrightScriptParser::ForEachStatementContext * /*ctx*/) override { }

  virtual void enterGotoStatement(BrightScriptParser::GotoStatementContext * /*ctx*/) override { }
  virtual void exitGotoStatement(BrightScriptParser::GotoStatementContext * /*ctx*/) override { }

  virtual void enterIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext * /*ctx*/) override { }
  virtual void exitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext * /*ctx*/) override { }

  virtual void enterIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext * /*ctx*/) override { }
  virtual void exitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext * /*ctx*/) override { }

  virtual void enterIfBlockStatement(BrightScriptParser::IfBlockStatementContext * /*ctx*/) override { }
  virtual void exitIfBlockStatement(BrightScriptParser::IfBlockStatementContext * /*ctx*/) override { }

  virtual void enterIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext * /*ctx*/) override { }
  virtual void exitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext * /*ctx*/) override { }

  virtual void enterIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext * /*ctx*/) override { }
  virtual void exitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext * /*ctx*/) override { }

  virtual void enterLabelStatement(BrightScriptParser::LabelStatementContext * /*ctx*/) override { }
  virtual void exitLabelStatement(BrightScriptParser::LabelStatementContext * /*ctx*/) override { }

  virtual void enterLibraryStatement(BrightScriptParser::LibraryStatementContext * /*ctx*/) override { }
  virtual void exitLibraryStatement(BrightScriptParser::LibraryStatementContext * /*ctx*/) override { }

  virtual void enterNextStatement(BrightScriptParser::NextStatementContext * /*ctx*/) override { }
  virtual void exitNextStatement(BrightScriptParser::NextStatementContext * /*ctx*/) override { }

  virtual void enterPrintStatement(BrightScriptParser::PrintStatementContext * /*ctx*/) override { }
  virtual void exitPrintStatement(BrightScriptParser::PrintStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(BrightScriptParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(BrightScriptParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterStopStatement(BrightScriptParser::StopStatementContext * /*ctx*/) override { }
  virtual void exitStopStatement(BrightScriptParser::StopStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(BrightScriptParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(BrightScriptParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext * /*ctx*/) override { }
  virtual void exitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext * /*ctx*/) override { }

  virtual void enterSubDeclaration(BrightScriptParser::SubDeclarationContext * /*ctx*/) override { }
  virtual void exitSubDeclaration(BrightScriptParser::SubDeclarationContext * /*ctx*/) override { }

  virtual void enterParameterList(BrightScriptParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(BrightScriptParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(BrightScriptParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(BrightScriptParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBaseType(BrightScriptParser::BaseTypeContext * /*ctx*/) override { }
  virtual void exitBaseType(BrightScriptParser::BaseTypeContext * /*ctx*/) override { }

  virtual void enterExpressionList(BrightScriptParser::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(BrightScriptParser::ExpressionListContext * /*ctx*/) override { }

  virtual void enterExpression(BrightScriptParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BrightScriptParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext * /*ctx*/) override { }
  virtual void exitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext * /*ctx*/) override { }

  virtual void enterGlobalFunction(BrightScriptParser::GlobalFunctionContext * /*ctx*/) override { }
  virtual void exitGlobalFunction(BrightScriptParser::GlobalFunctionContext * /*ctx*/) override { }

  virtual void enterPrimary(BrightScriptParser::PrimaryContext * /*ctx*/) override { }
  virtual void exitPrimary(BrightScriptParser::PrimaryContext * /*ctx*/) override { }

  virtual void enterLiteral(BrightScriptParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(BrightScriptParser::LiteralContext * /*ctx*/) override { }

  virtual void enterAssignableExpression(BrightScriptParser::AssignableExpressionContext * /*ctx*/) override { }
  virtual void exitAssignableExpression(BrightScriptParser::AssignableExpressionContext * /*ctx*/) override { }

  virtual void enterNumberLiteral(BrightScriptParser::NumberLiteralContext * /*ctx*/) override { }
  virtual void exitNumberLiteral(BrightScriptParser::NumberLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(BrightScriptParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(BrightScriptParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(BrightScriptParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(BrightScriptParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterInvalidLiteral(BrightScriptParser::InvalidLiteralContext * /*ctx*/) override { }
  virtual void exitInvalidLiteral(BrightScriptParser::InvalidLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifier(BrightScriptParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(BrightScriptParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext * /*ctx*/) override { }
  virtual void exitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext * /*ctx*/) override { }

  virtual void enterReservedWord(BrightScriptParser::ReservedWordContext * /*ctx*/) override { }
  virtual void exitReservedWord(BrightScriptParser::ReservedWordContext * /*ctx*/) override { }

  virtual void enterComment(BrightScriptParser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(BrightScriptParser::CommentContext * /*ctx*/) override { }

  virtual void enterEndOfLine(BrightScriptParser::EndOfLineContext * /*ctx*/) override { }
  virtual void exitEndOfLine(BrightScriptParser::EndOfLineContext * /*ctx*/) override { }

  virtual void enterEndOfStatement(BrightScriptParser::EndOfStatementContext * /*ctx*/) override { }
  virtual void exitEndOfStatement(BrightScriptParser::EndOfStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

