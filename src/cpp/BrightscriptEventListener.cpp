#include "BrightScriptEventListener.h"
#include "Node.h"

using namespace std;
using namespace emscripten;
using namespace antlr4;

static inline char string_toupper_functional(char c)
{
    return toupper(c);
}

static inline string string_upper(const string &str)
{
    //TODO - replace strcopy
    string strcopy(str.size(), 0);
    transform(str.begin(), str.end(), strcopy.begin(), string_toupper_functional);
    return strcopy;
}

bool isSub(ParserRuleContext *ctx)
{
    return ctx->getRuleIndex() == BrightScriptParser::RuleAnonymousSubDeclaration ||
           ctx->getRuleIndex() == BrightScriptParser::RuleSubDeclaration;
}

TreeNode buildTreeFromContext(ParserRuleContext *ctx, BrightScriptParser *parser)
{
    vector<TreeNode> children = {};
    for (auto child : ctx->children)
    {
        if (ParserRuleContext *childCtx = dynamic_cast<ParserRuleContext *>(child))
        {
            children.push_back(buildTreeFromContext(childCtx, parser));
        }
    }
    return TreeNode{
        Node{parser->getRuleNames()[ctx->getRuleIndex()], ctx->getText()},
        children};
}

bool isFunction(ParserRuleContext *ctx)
{
    return isSub(ctx) ||
           ctx->getRuleIndex() == BrightScriptParser::RuleAnonymousFunctionDeclaration ||
           ctx->getRuleIndex() == BrightScriptParser::RuleFunctionDeclaration;
}

ParserRuleContext *getParentFunctionContext(ParserRuleContext *ctx)
{
    if (ParserRuleContext *parent = dynamic_cast<ParserRuleContext *>(ctx->parent))
    {
        return isFunction(parent) ? parent : getParentFunctionContext(parent);
    }
    return nullptr;
}

void BrightScriptEventListener::enterFunctionDeclaration(BrightScriptParser::FunctionDeclarationContext *ctx)
{
    checkDeclaration(ctx->untypedIdentifier());
}

void BrightScriptEventListener::enterSubDeclaration(BrightScriptParser::SubDeclarationContext *ctx)
{
    checkDeclaration(ctx->untypedIdentifier());
}

void BrightScriptEventListener::exitReturnStatement(BrightScriptParser::ReturnStatementContext *ctx)
{
    auto functionParent = getParentFunctionContext(ctx);
    if (functionParent == nullptr)
    {
        return;
    }

    // if we can't figure out the type, it's
    // probably dynamic
    // TODO - Replace string constants with enums for performance
    string type = "DYNAMIC";
    if (isSub(functionParent))
    {
        type = "VOID";
    }
    else
    {
        for (auto child : functionParent->children)
        {
            if (BrightScriptParser::BaseTypeContext *childCtx = dynamic_cast<BrightScriptParser::BaseTypeContext *>(child))
            {
                type = string_upper(childCtx->getText());
            }
        }
    }

    bool hasExpression = ctx->children.size() > 1;
    if (type == "VOID" && hasExpression)
    {
        // Parser instance isn't available on context in C++ target. Need to figure out a different way to do this.
        //ctx->parser->notifyErrorListeners(ctx->start, "Unexpected return value for function with return type " + type, nullptr);
    }
    else if (type != "VOID" && !hasExpression)
    {
        //ctx->parser->notifyErrorListeners(ctx->start, "Expected return value for function with return type " + type, nullptr);
    }
}

bool BrightScriptEventListener::functionNameExists(string nameToCheck)
{
    for (auto name : functionNames)
    {
        if (name == nameToCheck)
        {
            return true;
        }
    }
    return false;
}

void BrightScriptEventListener::checkDeclaration(BrightScriptParser::UntypedIdentifierContext *ctx)
{
    auto name = string_upper(ctx->getText());
    if (functionNameExists(name))
    {
        //ctx->parser->notifyErrorListeners(ctx->start, "function \"" + name + "\" is declared multiple times", nullptr);
    }
    else
    {
        functionNames.push_back(name);
    }
}
