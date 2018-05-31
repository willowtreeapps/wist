#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

#include "antlr4-runtime.h"
#include "BrightScriptLexer.h"
#include "SyntaxErrorListener.h"
#include "BrightScriptEventListener.h"
#include "BrightscriptFormatVisitor.h"

using namespace antlr4;
using namespace std;
using namespace emscripten;

string formatText(string text, int indent)
{
    ANTLRInputStream input(text);
    BrightScriptLexer lexer(&input);
    lexer.removeErrorListeners();
    CommonTokenStream tokens(&lexer);
    BrightScriptParser parser(&tokens);
    parser.removeErrorListeners();

    BrightscriptFormatVisitor formatter(&tokens, indent);
    formatter.visit(parser.startRule());
    return formatter.getFormattedSource();
}

vector<SyntaxError> parse(ANTLRInputStream *stream, val *emitter)
{
    vector<SyntaxError> errors = {};

    BrightScriptLexer lexer(stream);
    lexer.removeErrorListeners();

    SyntaxErrorListener errorListener(&errors);
    lexer.addErrorListener(&errorListener);

    CommonTokenStream tokens(&lexer);

    BrightScriptParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);

    BrightScriptEventListener listener(emitter, &parser);

    tree::ParseTree *tree = parser.startRule();
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return errors;
}

vector<SyntaxError> parseText(string text, val emitter)
{
    ANTLRInputStream input(text);
    return parse(&input, &emitter);
}

int main()
{
    return 0;
}

EMSCRIPTEN_BINDINGS(wist_module)
{
    emscripten::function("parseText", &parseText);
    emscripten::function("formatText", &formatText);

    value_object<SyntaxError>("SyntaxError")
        .field("message", &SyntaxError::message)
        .field("line", &SyntaxError::line)
        .field("column", &SyntaxError::column);

    value_object<Node>("Node")
        .field("context", &Node::context)
        .field("start", &Node::start)
        .field("stop", &Node::stop)
        .field("text", &Node::text);

    value_object<Location>("Location")
        .field("line", &Location::line)
        .field("column", &Location::column);

    value_object<TreeNode>("TreeNode")
        .field("node", &TreeNode::node)
        .field("children", &TreeNode::children);

    register_vector<TreeNode>("TreeNodeList");
    register_vector<SyntaxError>("SyntaxErrorList");
};
