#ifndef __EVENTEMITTER_H__
#define __EVENTEMITTER_H__

#include "antlr4-runtime.h"

using namespace std;
using namespace antlr4;

struct EventEmitter
{
    void emit(string, antlrcpp::Any);
};

#endif