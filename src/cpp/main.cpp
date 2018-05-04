#include "antlr4-runtime.h"
#include "BrightScriptLexer.h"
#include "SyntaxErrorListener.h"
#include "Node.h"
#include "BrightscriptEventListener.h"

#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

using namespace antlr4;
using namespace std;
using namespace emscripten;

EMSCRIPTEN_KEEPALIVE vector<SyntaxError> parseWithEmitter(string source, val emitter)
{
    vector<SyntaxError> errors = {};
    ANTLRInputStream input(source);

    BrightScriptLexer lexer(&input);
    lexer.removeErrorListeners();

    SyntaxErrorListener errorListener(&errors);
    lexer.addErrorListener(&errorListener);

    CommonTokenStream tokens(&lexer);

    BrightScriptParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(&errorListener);

    tree::ParseTree *tree = parser.startRule();

    BrightscriptEventListener listener(&parser, &emitter);
    tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    return errors;
}

EMSCRIPTEN_KEEPALIVE vector<SyntaxError> parse(string source)
{
    return parseWithEmitter(source, val::null());
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
    emscripten::function("parse", &parse);
    emscripten::function("parseWithEmitter", &parseWithEmitter);

    emscripten::value_object<SyntaxError>("SyntaxError")
        .field("message", &SyntaxError::message)
        .field("line", &SyntaxError::line)
        .field("column", &SyntaxError::column);

    emscripten::value_object<Node>("Node")
        .field("ruleName", &Node::ruleName)
        .field("text", &Node::text);

    emscripten::value_object<TreeNode>("TreeNode")
        .field("node", &TreeNode::node)
        .field("children", &TreeNode::children);

    emscripten::register_vector<TreeNode>("TreeNodeList");
    emscripten::register_vector<SyntaxError>("SyntaxErrorList");
};
