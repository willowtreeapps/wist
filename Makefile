all: emscripten

SOURCES= \
  $(wildcard src/cpp/*.cpp) \
  $(wildcard src/cpp/parser/*.cpp) 

CC = em++
CPPFLAGS = -Isrc/cpp/parser -Ilibs/antlr4-runtime/include
LDFLAGS = -L/vagrant/libs/antlr4-runtime/lib/
LIBS = -llibantlr4-runtime
CFLAGS= -O3 --llvm-lto 1 -std=c++11 -s DISABLE_EXCEPTION_CATCHING=0 -s NO_EXIT_RUNTIME=1  -s WASM=1

emscripten:
	$(CC) $(CPPFLAGS) $(SOURCES) $(CFLAGS) $(LDFLAGS) $(LIBS) --bind -o dist/libwist.bc
	$(CC) $(CFLAGS) --bind dist/libwist.bc -s WASM=1 -o dist/libwist.js
