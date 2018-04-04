// Generated from BrightScript.g4 by ANTLR 4.7
// jshint ignore: start
var antlr4 = require('antlr4/index');

// This class defines a complete generic visitor for a parse tree produced by BrightScriptParser.

function BrightScriptVisitor() {
	antlr4.tree.ParseTreeVisitor.call(this);
	return this;
}

BrightScriptVisitor.prototype = Object.create(antlr4.tree.ParseTreeVisitor.prototype);
BrightScriptVisitor.prototype.constructor = BrightScriptVisitor;

// Visit a parse tree produced by BrightScriptParser#startRule.
BrightScriptVisitor.prototype.visitStartRule = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#component.
BrightScriptVisitor.prototype.visitComponent = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#componentHead.
BrightScriptVisitor.prototype.visitComponentHead = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#componentHeadElement.
BrightScriptVisitor.prototype.visitComponentHeadElement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#componentBody.
BrightScriptVisitor.prototype.visitComponentBody = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#componentBodyElement.
BrightScriptVisitor.prototype.visitComponentBodyElement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#block.
BrightScriptVisitor.prototype.visitBlock = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#blockStatement.
BrightScriptVisitor.prototype.visitBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#arrayInitializer.
BrightScriptVisitor.prototype.visitArrayInitializer = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#associativeArrayInitializer.
BrightScriptVisitor.prototype.visitAssociativeArrayInitializer = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#associativeElementInitializer.
BrightScriptVisitor.prototype.visitAssociativeElementInitializer = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationConstStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationConstStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationErrorStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationErrorStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationIfThenElseStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationIfThenElseStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationIfBlockStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationIfBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationIfElseIfBlockStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationIfElseIfBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#conditionalCompilationIfElseBlockStatement.
BrightScriptVisitor.prototype.visitConditionalCompilationIfElseBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#dimStatement.
BrightScriptVisitor.prototype.visitDimStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#endStatement.
BrightScriptVisitor.prototype.visitEndStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#exitStatement.
BrightScriptVisitor.prototype.visitExitStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#forStatement.
BrightScriptVisitor.prototype.visitForStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#forEachStatement.
BrightScriptVisitor.prototype.visitForEachStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#gotoStatement.
BrightScriptVisitor.prototype.visitGotoStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#ifThenElseStatement.
BrightScriptVisitor.prototype.visitIfThenElseStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#ifSingleLineStatement.
BrightScriptVisitor.prototype.visitIfSingleLineStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#ifBlockStatement.
BrightScriptVisitor.prototype.visitIfBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#ifElseIfBlockStatement.
BrightScriptVisitor.prototype.visitIfElseIfBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#ifElseBlockStatement.
BrightScriptVisitor.prototype.visitIfElseBlockStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#labelStatement.
BrightScriptVisitor.prototype.visitLabelStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#libraryStatement.
BrightScriptVisitor.prototype.visitLibraryStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#nextStatement.
BrightScriptVisitor.prototype.visitNextStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#printStatement.
BrightScriptVisitor.prototype.visitPrintStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#returnStatement.
BrightScriptVisitor.prototype.visitReturnStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#stopStatement.
BrightScriptVisitor.prototype.visitStopStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#whileStatement.
BrightScriptVisitor.prototype.visitWhileStatement = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#anonymousFunctionDeclaration.
BrightScriptVisitor.prototype.visitAnonymousFunctionDeclaration = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#functionDeclaration.
BrightScriptVisitor.prototype.visitFunctionDeclaration = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#anonymousSubDeclaration.
BrightScriptVisitor.prototype.visitAnonymousSubDeclaration = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#subDeclaration.
BrightScriptVisitor.prototype.visitSubDeclaration = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#parameterList.
BrightScriptVisitor.prototype.visitParameterList = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#parameter.
BrightScriptVisitor.prototype.visitParameter = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#baseType.
BrightScriptVisitor.prototype.visitBaseType = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#expressionList.
BrightScriptVisitor.prototype.visitExpressionList = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#expression.
BrightScriptVisitor.prototype.visitExpression = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#globalFunctionInvocation.
BrightScriptVisitor.prototype.visitGlobalFunctionInvocation = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#globalFunction.
BrightScriptVisitor.prototype.visitGlobalFunction = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#primary.
BrightScriptVisitor.prototype.visitPrimary = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#literal.
BrightScriptVisitor.prototype.visitLiteral = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#assignableExpression.
BrightScriptVisitor.prototype.visitAssignableExpression = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#numberLiteral.
BrightScriptVisitor.prototype.visitNumberLiteral = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#stringLiteral.
BrightScriptVisitor.prototype.visitStringLiteral = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#booleanLiteral.
BrightScriptVisitor.prototype.visitBooleanLiteral = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#invalidLiteral.
BrightScriptVisitor.prototype.visitInvalidLiteral = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#identifier.
BrightScriptVisitor.prototype.visitIdentifier = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#untypedIdentifier.
BrightScriptVisitor.prototype.visitUntypedIdentifier = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#reservedWord.
BrightScriptVisitor.prototype.visitReservedWord = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#comment.
BrightScriptVisitor.prototype.visitComment = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#endOfLine.
BrightScriptVisitor.prototype.visitEndOfLine = function(ctx) {
  return this.visitChildren(ctx);
};


// Visit a parse tree produced by BrightScriptParser#endOfStatement.
BrightScriptVisitor.prototype.visitEndOfStatement = function(ctx) {
  return this.visitChildren(ctx);
};



exports.BrightScriptVisitor = BrightScriptVisitor;