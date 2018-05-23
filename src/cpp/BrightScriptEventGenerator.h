#include "parser/BrightScriptBaseListener.h"
#include "EventEmitter.h"


#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

using namespace std;
using namespace emscripten;

class BrightScriptEventGenerator : public BrightScriptBaseListener {

    public:

    BrightScriptEventGenerator(EventEmitter emitter) : emitter(emitter) {}
    void enterStartRule(BrightScriptParser::StartRuleContext * ctx) override {
        this->emitter.emit("startRule:enter", ctx);
    }
    void exitStartRule(BrightScriptParser::StartRuleContext * ctx) override {
        this->emitter.emit("startRule:exit", ctx);
    }
    void enterComponent(BrightScriptParser::ComponentContext * ctx) override {
        this->emitter.emit("component:enter", ctx);
    }
    void exitComponent(BrightScriptParser::ComponentContext * ctx) override {
        this->emitter.emit("component:exit", ctx);
    }
    void enterComponentHead(BrightScriptParser::ComponentHeadContext * ctx) override {
        this->emitter.emit("componentHead:enter", ctx);
    }
    void exitComponentHead(BrightScriptParser::ComponentHeadContext * ctx) override {
        this->emitter.emit("componentHead:exit", ctx);
    }
    void enterComponentHeadElement(BrightScriptParser::ComponentHeadElementContext * ctx) override {
        this->emitter.emit("componentHeadElement:enter", ctx);
    }
    void exitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext * ctx) override {
        this->emitter.emit("componentHeadElement:exit", ctx);
    }
    void enterComponentBody(BrightScriptParser::ComponentBodyContext * ctx) override {
        this->emitter.emit("componentBody:enter", ctx);
    }
    void exitComponentBody(BrightScriptParser::ComponentBodyContext * ctx) override {
        this->emitter.emit("componentBody:exit", ctx);
    }
    void enterComponentBodyElement(BrightScriptParser::ComponentBodyElementContext * ctx) override {
        this->emitter.emit("componentBodyElement:enter", ctx);
    }
    void exitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext * ctx) override {
        this->emitter.emit("componentBodyElement:exit", ctx);
    }
    void enterBlock(BrightScriptParser::BlockContext * ctx) override {
        this->emitter.emit("block:enter", ctx);
    }
    void exitBlock(BrightScriptParser::BlockContext * ctx) override {
        this->emitter.emit("block:exit", ctx);
    }
    void enterBlockStatement(BrightScriptParser::BlockStatementContext * ctx) override {
        this->emitter.emit("blockStatement:enter", ctx);
    }
    void exitBlockStatement(BrightScriptParser::BlockStatementContext * ctx) override {
        this->emitter.emit("blockStatement:exit", ctx);
    }
    void enterArrayInitializer(BrightScriptParser::ArrayInitializerContext * ctx) override {
        this->emitter.emit("arrayInitializer:enter", ctx);
    }
    void exitArrayInitializer(BrightScriptParser::ArrayInitializerContext * ctx) override {
        this->emitter.emit("arrayInitializer:exit", ctx);
    }
    void enterAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext * ctx) override {
        this->emitter.emit("associativeArrayInitializer:enter", ctx);
    }
    void exitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext * ctx) override {
        this->emitter.emit("associativeArrayInitializer:exit", ctx);
    }
    void enterAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext * ctx) override {
        this->emitter.emit("associativeElementInitializer:enter", ctx);
    }
    void exitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext * ctx) override {
        this->emitter.emit("associativeElementInitializer:exit", ctx);
    }
    void enterConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationStatement:enter", ctx);
    }
    void exitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationStatement:exit", ctx);
    }
    void enterConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationConstStatement:enter", ctx);
    }
    void exitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationConstStatement:exit", ctx);
    }
    void enterConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationErrorStatement:enter", ctx);
    }
    void exitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationErrorStatement:exit", ctx);
    }
    void enterConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfThenElseStatement:enter", ctx);
    }
    void exitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfThenElseStatement:exit", ctx);
    }
    void enterConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfBlockStatement:enter", ctx);
    }
    void exitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfBlockStatement:exit", ctx);
    }
    void enterConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfElseIfBlockStatement:enter", ctx);
    }
    void exitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfElseIfBlockStatement:exit", ctx);
    }
    void enterConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfElseBlockStatement:enter", ctx);
    }
    void exitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext * ctx) override {
        this->emitter.emit("conditionalCompilationIfElseBlockStatement:exit", ctx);
    }
    void enterDimStatement(BrightScriptParser::DimStatementContext * ctx) override {
        this->emitter.emit("dimStatement:enter", ctx);
    }
    void exitDimStatement(BrightScriptParser::DimStatementContext * ctx) override {
        this->emitter.emit("dimStatement:exit", ctx);
    }
    void enterEndStatement(BrightScriptParser::EndStatementContext * ctx) override {
        this->emitter.emit("endStatement:enter", ctx);
    }
    void exitEndStatement(BrightScriptParser::EndStatementContext * ctx) override {
        this->emitter.emit("endStatement:exit", ctx);
    }
    void enterExitStatement(BrightScriptParser::ExitStatementContext * ctx) override {
        this->emitter.emit("exitStatement:enter", ctx);
    }
    void exitExitStatement(BrightScriptParser::ExitStatementContext * ctx) override {
        this->emitter.emit("exitStatement:exit", ctx);
    }
    void enterForStatement(BrightScriptParser::ForStatementContext * ctx) override {
        this->emitter.emit("forStatement:enter", ctx);
    }
    void exitForStatement(BrightScriptParser::ForStatementContext * ctx) override {
        this->emitter.emit("forStatement:exit", ctx);
    }
    void enterForEachStatement(BrightScriptParser::ForEachStatementContext * ctx) override {
        this->emitter.emit("forEachStatement:enter", ctx);
    }
    void exitForEachStatement(BrightScriptParser::ForEachStatementContext * ctx) override {
        this->emitter.emit("forEachStatement:exit", ctx);
    }
    void enterGotoStatement(BrightScriptParser::GotoStatementContext * ctx) override {
        this->emitter.emit("gotoStatement:enter", ctx);
    }
    void exitGotoStatement(BrightScriptParser::GotoStatementContext * ctx) override {
        this->emitter.emit("gotoStatement:exit", ctx);
    }
    void enterIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext * ctx) override {
        this->emitter.emit("ifThenElseStatement:enter", ctx);
    }
    void exitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext * ctx) override {
        this->emitter.emit("ifThenElseStatement:exit", ctx);
    }
    void enterIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext * ctx) override {
        this->emitter.emit("ifSingleLineStatement:enter", ctx);
    }
    void exitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext * ctx) override {
        this->emitter.emit("ifSingleLineStatement:exit", ctx);
    }
    void enterIfBlockStatement(BrightScriptParser::IfBlockStatementContext * ctx) override {
        this->emitter.emit("ifBlockStatement:enter", ctx);
    }
    void exitIfBlockStatement(BrightScriptParser::IfBlockStatementContext * ctx) override {
        this->emitter.emit("ifBlockStatement:exit", ctx);
    }
    void enterIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext * ctx) override {
        this->emitter.emit("ifElseIfBlockStatement:enter", ctx);
    }
    void exitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext * ctx) override {
        this->emitter.emit("ifElseIfBlockStatement:exit", ctx);
    }
    void enterIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext * ctx) override {
        this->emitter.emit("ifElseBlockStatement:enter", ctx);
    }
    void exitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext * ctx) override {
        this->emitter.emit("ifElseBlockStatement:exit", ctx);
    }
    void enterLabelStatement(BrightScriptParser::LabelStatementContext * ctx) override {
        this->emitter.emit("labelStatement:enter", ctx);
    }
    void exitLabelStatement(BrightScriptParser::LabelStatementContext * ctx) override {
        this->emitter.emit("labelStatement:exit", ctx);
    }
    void enterLibraryStatement(BrightScriptParser::LibraryStatementContext * ctx) override {
        this->emitter.emit("libraryStatement:enter", ctx);
    }
    void exitLibraryStatement(BrightScriptParser::LibraryStatementContext * ctx) override {
        this->emitter.emit("libraryStatement:exit", ctx);
    }
    void enterNextStatement(BrightScriptParser::NextStatementContext * ctx) override {
        this->emitter.emit("nextStatement:enter", ctx);
    }
    void exitNextStatement(BrightScriptParser::NextStatementContext * ctx) override {
        this->emitter.emit("nextStatement:exit", ctx);
    }
    void enterPrintStatement(BrightScriptParser::PrintStatementContext * ctx) override {
        this->emitter.emit("printStatement:enter", ctx);
    }
    void exitPrintStatement(BrightScriptParser::PrintStatementContext * ctx) override {
        this->emitter.emit("printStatement:exit", ctx);
    }
    void enterReturnStatement(BrightScriptParser::ReturnStatementContext * ctx) override {
        this->emitter.emit("returnStatement:enter", ctx);
    }
    void exitReturnStatement(BrightScriptParser::ReturnStatementContext * ctx) override {
        this->emitter.emit("returnStatement:exit", ctx);
    }
    void enterStopStatement(BrightScriptParser::StopStatementContext * ctx) override {
        this->emitter.emit("stopStatement:enter", ctx);
    }
    void exitStopStatement(BrightScriptParser::StopStatementContext * ctx) override {
        this->emitter.emit("stopStatement:exit", ctx);
    }
    void enterWhileStatement(BrightScriptParser::WhileStatementContext * ctx) override {
        this->emitter.emit("whileStatement:enter", ctx);
    }
    void exitWhileStatement(BrightScriptParser::WhileStatementContext * ctx) override {
        this->emitter.emit("whileStatement:exit", ctx);
    }
    void enterAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext * ctx) override {
        this->emitter.emit("anonymousFunctionDeclaration:enter", ctx);
    }
    void exitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext * ctx) override {
        this->emitter.emit("anonymousFunctionDeclaration:exit", ctx);
    }
    void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext * ctx) override {
        this->emitter.emit("functionDeclaration:enter", ctx);
    }
    void exitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext * ctx) override {
        this->emitter.emit("functionDeclaration:exit", ctx);
    }
    void enterAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext * ctx) override {
        this->emitter.emit("anonymousSubDeclaration:enter", ctx);
    }
    void exitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext * ctx) override {
        this->emitter.emit("anonymousSubDeclaration:exit", ctx);
    }
    void enterSubDeclaration(BrightScriptParser::SubDeclarationContext * ctx) override {
        this->emitter.emit("subDeclaration:enter", ctx);
    }
    void exitSubDeclaration(BrightScriptParser::SubDeclarationContext * ctx) override {
        this->emitter.emit("subDeclaration:exit", ctx);
    }
    void enterParameterList(BrightScriptParser::ParameterListContext * ctx) override {
        this->emitter.emit("parameterList:enter", ctx);
    }
    void exitParameterList(BrightScriptParser::ParameterListContext * ctx) override {
        this->emitter.emit("parameterList:exit", ctx);
    }
    void enterParameter(BrightScriptParser::ParameterContext * ctx) override {
        this->emitter.emit("parameter:enter", ctx);
    }
    void exitParameter(BrightScriptParser::ParameterContext * ctx) override {
        this->emitter.emit("parameter:exit", ctx);
    }
    void enterBaseType(BrightScriptParser::BaseTypeContext * ctx) override {
        this->emitter.emit("baseType:enter", ctx);
    }
    void exitBaseType(BrightScriptParser::BaseTypeContext * ctx) override {
        this->emitter.emit("baseType:exit", ctx);
    }
    void enterExpressionList(BrightScriptParser::ExpressionListContext * ctx) override {
        this->emitter.emit("expressionList:enter", ctx);
    }
    void exitExpressionList(BrightScriptParser::ExpressionListContext * ctx) override {
        this->emitter.emit("expressionList:exit", ctx);
    }
    void enterExpression(BrightScriptParser::ExpressionContext * ctx) override {
        this->emitter.emit("expression:enter", ctx);
    }
    void exitExpression(BrightScriptParser::ExpressionContext * ctx) override {
        this->emitter.emit("expression:exit", ctx);
    }
    void enterGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext * ctx) override {
        this->emitter.emit("globalFunctionInvocation:enter", ctx);
    }
    void exitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext * ctx) override {
        this->emitter.emit("globalFunctionInvocation:exit", ctx);
    }
    void enterGlobalFunction(BrightScriptParser::GlobalFunctionContext * ctx) override {
        this->emitter.emit("globalFunction:enter", ctx);
    }
    void exitGlobalFunction(BrightScriptParser::GlobalFunctionContext * ctx) override {
        this->emitter.emit("globalFunction:exit", ctx);
    }
    void enterPrimary(BrightScriptParser::PrimaryContext * ctx) override {
        this->emitter.emit("primary:enter", ctx);
    }
    void exitPrimary(BrightScriptParser::PrimaryContext * ctx) override {
        this->emitter.emit("primary:exit", ctx);
    }
    void enterLiteral(BrightScriptParser::LiteralContext * ctx) override {
        this->emitter.emit("literal:enter", ctx);
    }
    void exitLiteral(BrightScriptParser::LiteralContext * ctx) override {
        this->emitter.emit("literal:exit", ctx);
    }
    void enterAssignableExpression(BrightScriptParser::AssignableExpressionContext * ctx) override {
        this->emitter.emit("assignableExpression:enter", ctx);
    }
    void exitAssignableExpression(BrightScriptParser::AssignableExpressionContext * ctx) override {
        this->emitter.emit("assignableExpression:exit", ctx);
    }
    void enterNumberLiteral(BrightScriptParser::NumberLiteralContext * ctx) override {
        this->emitter.emit("numberLiteral:enter", ctx);
    }
    void exitNumberLiteral(BrightScriptParser::NumberLiteralContext * ctx) override {
        this->emitter.emit("numberLiteral:exit", ctx);
    }
    void enterStringLiteral(BrightScriptParser::StringLiteralContext * ctx) override {
        this->emitter.emit("stringLiteral:enter", ctx);
    }
    void exitStringLiteral(BrightScriptParser::StringLiteralContext * ctx) override {
        this->emitter.emit("stringLiteral:exit", ctx);
    }
    void enterBooleanLiteral(BrightScriptParser::BooleanLiteralContext * ctx) override {
        this->emitter.emit("booleanLiteral:enter", ctx);
    }
    void exitBooleanLiteral(BrightScriptParser::BooleanLiteralContext * ctx) override {
        this->emitter.emit("booleanLiteral:exit", ctx);
    }
    void enterInvalidLiteral(BrightScriptParser::InvalidLiteralContext * ctx) override {
        this->emitter.emit("invalidLiteral:enter", ctx);
    }
    void exitInvalidLiteral(BrightScriptParser::InvalidLiteralContext * ctx) override {
        this->emitter.emit("invalidLiteral:exit", ctx);
    }
    void enterIdentifier(BrightScriptParser::IdentifierContext * ctx) override {
        this->emitter.emit("identifier:enter", ctx);
    }
    void exitIdentifier(BrightScriptParser::IdentifierContext * ctx) override {
        this->emitter.emit("identifier:exit", ctx);
    }
    void enterUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext * ctx) override {
        this->emitter.emit("untypedIdentifier:enter", ctx);
    }
    void exitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext * ctx) override {
        this->emitter.emit("untypedIdentifier:exit", ctx);
    }
    void enterReservedWord(BrightScriptParser::ReservedWordContext * ctx) override {
        this->emitter.emit("reservedWord:enter", ctx);
    }
    void exitReservedWord(BrightScriptParser::ReservedWordContext * ctx) override {
        this->emitter.emit("reservedWord:exit", ctx);
    }
    void enterComment(BrightScriptParser::CommentContext * ctx) override {
        this->emitter.emit("comment:enter", ctx);
    }
    void exitComment(BrightScriptParser::CommentContext * ctx) override {
        this->emitter.emit("comment:exit", ctx);
    }
    void enterEndOfLine(BrightScriptParser::EndOfLineContext * ctx) override {
        this->emitter.emit("endOfLine:enter", ctx);
    }
    void exitEndOfLine(BrightScriptParser::EndOfLineContext * ctx) override {
        this->emitter.emit("endOfLine:exit", ctx);
    }
    void enterEndOfStatement(BrightScriptParser::EndOfStatementContext * ctx) override {
        this->emitter.emit("endOfStatement:enter", ctx);
    }
    void exitEndOfStatement(BrightScriptParser::EndOfStatementContext * ctx) override {
        this->emitter.emit("endOfStatement:exit", ctx);
    }
    void enterEveryRule(antlr4::ParserRuleContext * ctx) override {
        this->emitter.emit("everyRule:enter", ctx);
    }
    void exitEveryRule(antlr4::ParserRuleContext * ctx) override {
        this->emitter.emit("everyRule:exit", ctx);
    }
private:
        EventEmitter emitter;
    };