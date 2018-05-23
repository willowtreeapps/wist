#include "antlr4-runtime.h"
#include "BrightScriptLexer.h"
#include "SyntaxErrorListener.h"
#include "Node.h"
#include "BrightScriptEventListener.h"

#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

using namespace antlr4;
using namespace std;
using namespace emscripten;

class ParserModule {
public:
    ParserModule(EventEmitter emitter) : listener(emitter) {}

    vector<SyntaxError> parseText(string text)
    {
        ANTLRInputStream input(text);
        return this->parse(input);
    }

    vector<SyntaxError> parseFile(string path)
    {
        ANTLRFileStream fileName(path);
        return this->parse(fileName);
    }

    void traverse(::tree::ParseTree &ast)
    {
        tree::ParseTreeWalker::DEFAULT.walk(&listener, &ast);
    }

private:
    BrightScriptEventListener listener;
    vector<SyntaxError> parse(ANTLRInputStream stream) {
        vector<SyntaxError> errors = {};

        BrightScriptLexer lexer(&stream);
        lexer.removeErrorListeners();

        SyntaxErrorListener errorListener(&errors);
        lexer.addErrorListener(&errorListener);

        CommonTokenStream tokens(&lexer);

        BrightScriptParser parser(&tokens);
        parser.removeErrorListeners();
        parser.addErrorListener(&errorListener);

        tree::ParseTree *tree = parser.startRule();

        tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

        return errors;
    }
};

int main()
{
    EM_ASM(
        FS.mkdir('/working');
        FS.mount(NODEFS, {root : '.'}, '/working'););
    return 0;
}

EMSCRIPTEN_BINDINGS(wist_module)
{
    class_<ParserModule>("Parser")
        .constructor<EventEmitter>()
        .function("parseText", &ParserModule::parseText)
        .function("parseFile", &ParserModule::parseFile)
        .function("traverse", &ParserModule::traverse);

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
