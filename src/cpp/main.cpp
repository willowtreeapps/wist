#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

#include "antlr4-runtime.h"
#include "BrightScriptLexer.h"
#include "SyntaxErrorListener.h"
#include "BrightScriptEventListener.h"

using namespace antlr4;
using namespace std;
using namespace emscripten;

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
    EM_ASM(
        FS.mkdir('/working');
        FS.mount(NODEFS, {root : '.'}, '/working'););
    return 0;
}

EMSCRIPTEN_BINDINGS(wist_module)
{
    emscripten::function("parseText", &parseText);

    value_object<SyntaxError>("SyntaxError")
        .field("message", &SyntaxError::message)
        .field("line", &SyntaxError::line)
        .field("column", &SyntaxError::column);

    value_object<Node>("Node")
        .field("ruleName", &Node::ruleName)
        .field("text", &Node::text);

    value_object<TreeNode>("TreeNode")
        .field("node", &TreeNode::node)
        .field("children", &TreeNode::children);

    register_vector<TreeNode>("TreeNodeList");
    register_vector<SyntaxError>("SyntaxErrorList");
};
