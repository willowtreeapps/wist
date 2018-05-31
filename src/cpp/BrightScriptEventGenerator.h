
/*
* GENERATED FILE - DO NOT MODIFY
*/
#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

#include "parser/BrightScriptBaseListener.h"
#include "Node.h"

using namespace std;
using namespace antlr4;
using namespace emscripten;
class BrightScriptEventGenerator : public BrightScriptBaseListener
{

  public:
    BrightScriptEventGenerator(val *emitter, BrightScriptParser *parser)
    {
        _emitter = emitter;
        _parser = parser;
    }
    void enterStartRule(BrightScriptParser::StartRuleContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "startRule:enter", buildTreeFromContext(ruleContext));
        }
    }
    void enterComponent(BrightScriptParser::ComponentContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "component:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComponentHead(BrightScriptParser::ComponentHeadContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentHead:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentHeadElement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComponentHeadElement(BrightScriptParser::ComponentHeadElementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentHeadElement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterComponentBody(BrightScriptParser::ComponentBodyContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentBody:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComponentBody(BrightScriptParser::ComponentBodyContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentBody:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentBodyElement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComponentBodyElement(BrightScriptParser::ComponentBodyElementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentBodyElement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterBlock(BrightScriptParser::BlockContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "block:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitBlock(BrightScriptParser::BlockContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "block:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterBlockStatement(BrightScriptParser::BlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "blockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitBlockStatement(BrightScriptParser::BlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "blockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "arrayInitializer:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitArrayInitializer(BrightScriptParser::ArrayInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "arrayInitializer:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "associativeArrayInitializer:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitAssociativeArrayInitializer(BrightScriptParser::AssociativeArrayInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "associativeArrayInitializer:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "associativeElementInitializer:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitAssociativeElementInitializer(BrightScriptParser::AssociativeElementInitializerContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "associativeElementInitializer:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationStatement(BrightScriptParser::ConditionalCompilationStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationConstStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationConstStatement(BrightScriptParser::ConditionalCompilationConstStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationConstStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationErrorStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationErrorStatement(BrightScriptParser::ConditionalCompilationErrorStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationErrorStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfThenElseStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationIfThenElseStatement(BrightScriptParser::ConditionalCompilationIfThenElseStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfThenElseStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationIfBlockStatement(BrightScriptParser::ConditionalCompilationIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfElseIfBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationIfElseIfBlockStatement(BrightScriptParser::ConditionalCompilationIfElseIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfElseIfBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfElseBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitConditionalCompilationIfElseBlockStatement(BrightScriptParser::ConditionalCompilationIfElseBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "conditionalCompilationIfElseBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterDimStatement(BrightScriptParser::DimStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "dimStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitDimStatement(BrightScriptParser::DimStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "dimStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterEndStatement(BrightScriptParser::EndStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitEndStatement(BrightScriptParser::EndStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterExitStatement(BrightScriptParser::ExitStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "exitStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitExitStatement(BrightScriptParser::ExitStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "exitStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterForStatement(BrightScriptParser::ForStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "forStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitForStatement(BrightScriptParser::ForStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "forStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterForEachStatement(BrightScriptParser::ForEachStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "forEachStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitForEachStatement(BrightScriptParser::ForEachStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "forEachStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterGotoStatement(BrightScriptParser::GotoStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "gotoStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitGotoStatement(BrightScriptParser::GotoStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "gotoStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifThenElseStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIfThenElseStatement(BrightScriptParser::IfThenElseStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifThenElseStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifSingleLineStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIfSingleLineStatement(BrightScriptParser::IfSingleLineStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifSingleLineStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIfBlockStatement(BrightScriptParser::IfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIfBlockStatement(BrightScriptParser::IfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifElseIfBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIfElseIfBlockStatement(BrightScriptParser::IfElseIfBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifElseIfBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifElseBlockStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIfElseBlockStatement(BrightScriptParser::IfElseBlockStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "ifElseBlockStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterLabelStatement(BrightScriptParser::LabelStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "labelStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitLabelStatement(BrightScriptParser::LabelStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "labelStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterLibraryStatement(BrightScriptParser::LibraryStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "libraryStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitLibraryStatement(BrightScriptParser::LibraryStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "libraryStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterNextStatement(BrightScriptParser::NextStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "nextStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitNextStatement(BrightScriptParser::NextStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "nextStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterPrintStatement(BrightScriptParser::PrintStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "printStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitPrintStatement(BrightScriptParser::PrintStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "printStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "returnStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComponent(BrightScriptParser::ComponentContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "component:exit", buildTreeFromContext(ruleContext));
        }
    }
    void exitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "returnStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void exitStopStatement(BrightScriptParser::StopStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "stopStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterWhileStatement(BrightScriptParser::WhileStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "whileStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitWhileStatement(BrightScriptParser::WhileStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "whileStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "anonymousFunctionDeclaration:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitAnonymousFunctionDeclaration(BrightScriptParser::AnonymousFunctionDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "anonymousFunctionDeclaration:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "functionDeclaration:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "functionDeclaration:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "anonymousSubDeclaration:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitAnonymousSubDeclaration(BrightScriptParser::AnonymousSubDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "anonymousSubDeclaration:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "subDeclaration:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "subDeclaration:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterParameterList(BrightScriptParser::ParameterListContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "parameterList:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitParameterList(BrightScriptParser::ParameterListContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "parameterList:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterParameter(BrightScriptParser::ParameterContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "parameter:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitParameter(BrightScriptParser::ParameterContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "parameter:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterBaseType(BrightScriptParser::BaseTypeContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "baseType:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitBaseType(BrightScriptParser::BaseTypeContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "baseType:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterExpressionList(BrightScriptParser::ExpressionListContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "expressionList:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitExpressionList(BrightScriptParser::ExpressionListContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "expressionList:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterExpression(BrightScriptParser::ExpressionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "expression:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitExpression(BrightScriptParser::ExpressionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "expression:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "globalFunctionInvocation:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitGlobalFunctionInvocation(BrightScriptParser::GlobalFunctionInvocationContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "globalFunctionInvocation:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterGlobalFunction(BrightScriptParser::GlobalFunctionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "globalFunction:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitGlobalFunction(BrightScriptParser::GlobalFunctionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "globalFunction:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterPrimary(BrightScriptParser::PrimaryContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "primary:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitPrimary(BrightScriptParser::PrimaryContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "primary:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterLiteral(BrightScriptParser::LiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "literal:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitLiteral(BrightScriptParser::LiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "literal:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterAssignableExpression(BrightScriptParser::AssignableExpressionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "assignableExpression:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitAssignableExpression(BrightScriptParser::AssignableExpressionContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "assignableExpression:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterNumberLiteral(BrightScriptParser::NumberLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "numberLiteral:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitNumberLiteral(BrightScriptParser::NumberLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "numberLiteral:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterStringLiteral(BrightScriptParser::StringLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "stringLiteral:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitStringLiteral(BrightScriptParser::StringLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "stringLiteral:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterBooleanLiteral(BrightScriptParser::BooleanLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "booleanLiteral:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitBooleanLiteral(BrightScriptParser::BooleanLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "booleanLiteral:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterInvalidLiteral(BrightScriptParser::InvalidLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "invalidLiteral:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitInvalidLiteral(BrightScriptParser::InvalidLiteralContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "invalidLiteral:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterIdentifier(BrightScriptParser::IdentifierContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "identifier:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitIdentifier(BrightScriptParser::IdentifierContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "identifier:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "untypedIdentifier:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitUntypedIdentifier(BrightScriptParser::UntypedIdentifierContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "untypedIdentifier:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterReservedWord(BrightScriptParser::ReservedWordContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "reservedWord:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitReservedWord(BrightScriptParser::ReservedWordContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "reservedWord:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterComment(BrightScriptParser::CommentContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "comment:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitComment(BrightScriptParser::CommentContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "comment:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterEndOfLine(BrightScriptParser::EndOfLineContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endOfLine:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitEndOfLine(BrightScriptParser::EndOfLineContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endOfLine:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterEndOfStatement(BrightScriptParser::EndOfStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endOfStatement:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitEndOfStatement(BrightScriptParser::EndOfStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "endOfStatement:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterEveryRule(antlr4::ParserRuleContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "everyRule:enter", buildTreeFromContext(ruleContext));
        }
    }
    void exitEveryRule(antlr4::ParserRuleContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "everyRule:exit", buildTreeFromContext(ruleContext));
        }
    }
    void exitStartRule(BrightScriptParser::StartRuleContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "startRule:exit", buildTreeFromContext(ruleContext));
        }
    }
    void enterComponentHead(BrightScriptParser::ComponentHeadContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "componentHead:enter", buildTreeFromContext(ruleContext));
        }
    }
    void enterStopStatement(BrightScriptParser::StopStatementContext *ctx) override
    {
        if (ParserRuleContext *ruleContext = dynamic_cast<ParserRuleContext *>(ctx))
        {
            _emitter->call<val, string, TreeNode>("emit", "stopStatement:enter", buildTreeFromContext(ruleContext));
        }
    }

  private:
    val *_emitter;
    BrightScriptParser *_parser;

    TreeNode buildTreeFromContext(ParserRuleContext *ctx)
    {
        vector<TreeNode> children = {};
        for (auto child : ctx->children)
        {
            if (ParserRuleContext *childCtx = dynamic_cast<ParserRuleContext *>(child))
            {
                children.push_back(buildTreeFromContext(childCtx));
            }
            else if (tree::TerminalNode *terminalNode = dynamic_cast<tree::TerminalNode *>(child))
            {
                children.push_back(buildTerminalNodeFromContext(terminalNode));
            }
        }

        string ruleName = _parser->getRuleNames()[ctx->getRuleIndex()];
        string ruleText = ctx->getText();
        int startLine = ctx->getStart()->getLine();
        int startCol = ctx->getStart()->getCharPositionInLine();

        int stopLine = ctx->getStop()->getLine();
        int stopCol = ctx->getStop()->getCharPositionInLine();

        return TreeNode{Node{ruleName, ruleText, Location{startLine, startCol}, Location{stopLine, stopCol}}, children};
    }

    TreeNode buildTerminalNodeFromContext(tree::TerminalNode *node)
    {

        string ruleName = "terminalNode";
        string ruleText = node->getText();
        int startLine = node->getSymbol()->getLine();
        int startCol = node->getSymbol()->getCharPositionInLine();

        int stopLine = node->getSymbol()->getLine();
        int stopCol = node->getSymbol()->getCharPositionInLine();

        return TreeNode{Node{ruleName, ruleText, Location{startLine, startCol}, Location{stopLine, stopCol}}, {}};
    }
};