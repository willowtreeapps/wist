#include "parser/BrightScriptBaseListener.h"

#include <emscripten/emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/val.h>

using namespace std;
using namespace emscripten;

class BrightScriptEventGenerator : public BrightScriptBaseListener {

    public:

    BrightScriptEventGenerator(val *emitter) : emitter(emitter) {}
    void enterStartRule(BrightScriptParser::StartRuleContext *ctx) override {
        emitter->call<val, BrightScriptParser::StartRuleContext>("emit", ctx);
    }
private:
        val *emitter;
    };