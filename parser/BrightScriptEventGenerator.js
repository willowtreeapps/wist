const BrightScriptListener = require('./antlr/BrightScriptListener').BrightScriptListener;

class BrightScriptEventGenerator extends BrightScriptListener {
    constructor(emitter) {
        super();
        this.emitter = emitter;
    }
    enterStartRule(context) {
        this.emitter.emit('startRule:enter', context);
    }
    enterComponent(context) {
        this.emitter.emit('component:enter', context);
    }
    enterComponentBody(context) {
        this.emitter.emit('componentBody:enter', context);
    }
    enterComponentBodyElement(context) {
        this.emitter.emit('componentBodyElement:enter', context);
    }
    enterBlock(context) {
        this.emitter.emit('block:enter', context);
    }
    enterBlockStatement(context) {
        this.emitter.emit('blockStatement:enter', context);
    }
    enterArrayInitializer(context) {
        this.emitter.emit('arrayInitializer:enter', context);
    }
    enterAssociativeArrayInitializer(context) {
        this.emitter.emit('associativeArrayInitializer:enter', context);
    }
    enterDimStatement(context) {
        this.emitter.emit('dimStatement:enter', context);
    }
    enterAssociativeElementInitializer(context) {
        this.emitter.emit('associativeElementInitializer:enter', context);
    }
    enterExitStatement(context) {
        this.emitter.emit('exitStatement:enter', context);
    }
    enterForStatement(context) {
        this.emitter.emit('forStatement:enter', context);
    }
    enterForEachStatement(context) {
        this.emitter.emit('forEachStatement:enter', context);
    }
    enterGotoStatement(context) {
        this.emitter.emit('gotoStatement:enter', context);
    }
    enterIfThenElseStatement(context) {
        this.emitter.emit('ifThenElseStatement:enter', context);
    }
    enterIfSingleLineStatement(context) {
        this.emitter.emit('ifSingleLineStatement:enter', context);
    }
    enterIfBlockStatement(context) {
        this.emitter.emit('ifBlockStatement:enter', context);
    }
    enterIfElseIfBlockStatement(context) {
        this.emitter.emit('ifElseIfBlockStatement:enter', context);
    }
    enterIfElseBlockStatement(context) {
        this.emitter.emit('ifElseBlockStatement:enter', context);
    }
    enterLabelStatement(context) {
        this.emitter.emit('labelStatement:enter', context);
    }
    enterLibraryStatement(context) {
        this.emitter.emit('libraryStatement:enter', context);
    }
    enterNextStatement(context) {
        this.emitter.emit('nextStatement:enter', context);
    }
    enterPrintStatement(context) {
        this.emitter.emit('printStatement:enter', context);
    }
    enterReturnStatement(context) {
        this.emitter.emit('returnStatement:enter', context);
    }
    enterStopStatement(context) {
        this.emitter.emit('stopStatement:enter', context);
    }
    enterWhileStatement(context) {
        this.emitter.emit('whileStatement:enter', context);
    }
    enterAnonymousFunctionDeclaration(context) {
        this.emitter.emit('anonymousFunctionDeclaration:enter', context);
    }
    enterFunctionDeclaration(context) {
        this.emitter.emit('functionDeclaration:enter', context);
    }
    enterAnonymousSubDeclaration(context) {
        this.emitter.emit('anonymousSubDeclaration:enter', context);
    }
    enterSubDeclaration(context) {
        this.emitter.emit('subDeclaration:enter', context);
    }
    enterParameterList(context) {
        this.emitter.emit('parameterList:enter', context);
    }
    enterParameter(context) {
        this.emitter.emit('parameter:enter', context);
    }
    enterBaseType(context) {
        this.emitter.emit('baseType:enter', context);
    }
    enterExpressionList(context) {
        this.emitter.emit('expressionList:enter', context);
    }
    enterExpression(context) {
        this.emitter.emit('expression:enter', context);
    }
    enterGlobalFunctionInvocation(context) {
        this.emitter.emit('globalFunctionInvocation:enter', context);
    }
    enterGlobalFunction(context) {
        this.emitter.emit('globalFunction:enter', context);
    }
    enterPrimary(context) {
        this.emitter.emit('primary:enter', context);
    }
    enterLiteral(context) {
        this.emitter.emit('literal:enter', context);
    }
    enterAssignableExpression(context) {
        this.emitter.emit('assignableExpression:enter', context);
    }
    enterNumberLiteral(context) {
        this.emitter.emit('numberLiteral:enter', context);
    }
    enterStringLiteral(context) {
        this.emitter.emit('stringLiteral:enter', context);
    }
    enterBooleanLiteral(context) {
        this.emitter.emit('booleanLiteral:enter', context);
    }
    enterInvalidLiteral(context) {
        this.emitter.emit('invalidLiteral:enter', context);
    }
    enterIdentifier(context) {
        this.emitter.emit('identifier:enter', context);
    }
    enterUntypedIdentifier(context) {
        this.emitter.emit('untypedIdentifier:enter', context);
    }
    enterReservedWord(context) {
        this.emitter.emit('reservedWord:enter', context);
    }
    enterComment(context) {
        this.emitter.emit('comment:enter', context);
    }
    enterEndOfLine(context) {
        this.emitter.emit('endOfLine:enter', context);
    }
    enterEndOfStatement(context) {
        this.emitter.emit('endOfStatement:enter', context);
    }
    exitStartRule(context) {
        this.emitter.emit('startRule:exit', context);
    }
    exitComponent(context) {
        this.emitter.emit('component:exit', context);
    }
    exitComponentBody(context) {
        this.emitter.emit('componentBody:exit', context);
    }
    exitComponentBodyElement(context) {
        this.emitter.emit('componentBodyElement:exit', context);
    }
    exitBlock(context) {
        this.emitter.emit('block:exit', context);
    }
    exitBlockStatement(context) {
        this.emitter.emit('blockStatement:exit', context);
    }
    exitArrayInitializer(context) {
        this.emitter.emit('arrayInitializer:exit', context);
    }
    exitAssociativeArrayInitializer(context) {
        this.emitter.emit('associativeArrayInitializer:exit', context);
    }
    exitAssociativeElementInitializer(context) {
        this.emitter.emit('associativeElementInitializer:exit', context);
    }
    exitDimStatement(context) {
        this.emitter.emit('dimStatement:exit', context);
    }
    exitExitStatement(context) {
        this.emitter.emit('exitStatement:exit', context);
    }
    exitForStatement(context) {
        this.emitter.emit('forStatement:exit', context);
    }
    exitForEachStatement(context) {
        this.emitter.emit('forEachStatement:exit', context);
    }
    exitGotoStatement(context) {
        this.emitter.emit('gotoStatement:exit', context);
    }
    exitIfThenElseStatement(context) {
        this.emitter.emit('ifThenElseStatement:exit', context);
    }
    exitIfSingleLineStatement(context) {
        this.emitter.emit('ifSingleLineStatement:exit', context);
    }
    exitIfBlockStatement(context) {
        this.emitter.emit('ifBlockStatement:exit', context);
    }
    exitIfElseIfBlockStatement(context) {
        this.emitter.emit('ifElseIfBlockStatement:exit', context);
    }
    exitIfElseBlockStatement(context) {
        this.emitter.emit('ifElseBlockStatement:exit', context);
    }
    exitLabelStatement(context) {
        this.emitter.emit('labelStatement:exit', context);
    }
    exitLibraryStatement(context) {
        this.emitter.emit('libraryStatement:exit', context);
    }
    exitNextStatement(context) {
        this.emitter.emit('nextStatement:exit', context);
    }
    exitPrintStatement(context) {
        this.emitter.emit('printStatement:exit', context);
    }
    exitReturnStatement(context) {
        this.emitter.emit('returnStatement:exit', context);
    }
    exitStopStatement(context) {
        this.emitter.emit('stopStatement:exit', context);
    }
    exitWhileStatement(context) {
        this.emitter.emit('whileStatement:exit', context);
    }
    exitAnonymousFunctionDeclaration(context) {
        this.emitter.emit('anonymousFunctionDeclaration:exit', context);
    }
    exitFunctionDeclaration(context) {
        this.emitter.emit('functionDeclaration:exit', context);
    }
    exitAnonymousSubDeclaration(context) {
        this.emitter.emit('anonymousSubDeclaration:exit', context);
    }
    exitSubDeclaration(context) {
        this.emitter.emit('subDeclaration:exit', context);
    }
    exitParameterList(context) {
        this.emitter.emit('parameterList:exit', context);
    }
    exitParameter(context) {
        this.emitter.emit('parameter:exit', context);
    }
    exitBaseType(context) {
        this.emitter.emit('baseType:exit', context);
    }
    exitExpressionList(context) {
        this.emitter.emit('expressionList:exit', context);
    }
    exitExpression(context) {
        this.emitter.emit('expression:exit', context);
    }
    exitGlobalFunctionInvocation(context) {
        this.emitter.emit('globalFunctionInvocation:exit', context);
    }
    exitGlobalFunction(context) {
        this.emitter.emit('globalFunction:exit', context);
    }
    exitPrimary(context) {
        this.emitter.emit('primary:exit', context);
    }
    exitLiteral(context) {
        this.emitter.emit('literal:exit', context);
    }
    exitAssignableExpression(context) {
        this.emitter.emit('assignableExpression:exit', context);
    }
    exitNumberLiteral(context) {
        this.emitter.emit('numberLiteral:exit', context);
    }
    exitStringLiteral(context) {
        this.emitter.emit('stringLiteral:exit', context);
    }
    exitBooleanLiteral(context) {
        this.emitter.emit('booleanLiteral:exit', context);
    }
    exitInvalidLiteral(context) {
        this.emitter.emit('invalidLiteral:exit', context);
    }
    exitIdentifier(context) {
        this.emitter.emit('identifier:exit', context);
    }
    exitUntypedIdentifier(context) {
        this.emitter.emit('untypedIdentifier:exit', context);
    }
    exitReservedWord(context) {
        this.emitter.emit('reservedWord:exit', context);
    }
    exitComment(context) {
        this.emitter.emit('comment:exit', context);
    }
    exitEndOfLine(context) {
        this.emitter.emit('endOfLine:exit', context);
    }
    exitEndOfStatement(context) {
        this.emitter.emit('endOfStatement:exit', context);
    }
}
module.exports = BrightScriptEventGenerator;