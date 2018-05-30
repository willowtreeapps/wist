all: emscripten

ANTLRDIR = libs/antlr4-runtime
SOURCES = \
  $(wildcard src/cpp/*.cpp) \
  $(wildcard src/cpp/parser/*.cpp) 

CC = em++
CPPFLAGS = -Isrc/cpp/parser -I$(ANTLRDIR)/include
LDFLAGS = -L$(ANTLRDIR)/lib/
LIBS = -llibantlr4-runtime
CFLAGS = -O3 --llvm-lto 1 -std=c++11 
EMFLAGS= -s DISABLE_EXCEPTION_CATCHING=0 -s NO_EXIT_RUNTIME=1  -s WASM=1 -s BINARYEN_ASYNC_COMPILATION=0 -s ALLOW_MEMORY_GROWTH=1
emscripten:
	$(CC) $(CPPFLAGS) $(SOURCES) $(CFLAGS) $(EMFLAGS) $(LDFLAGS) $(LIBS) --bind -o dist/libwist.bc
	$(CC) $(CFLAGS) $(EMFLAGS) --bind dist/libwist.bc -s WASM=1 -o dist/libwist.js --pre-js scripts/pre.js
