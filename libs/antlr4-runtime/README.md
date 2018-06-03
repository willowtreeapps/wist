# libantlr4-runtime

The included antlr binary was compiled using emscripten and is an archive of LLVM bitcode. 
Following the instructions on ANTLR repo will not yeild the same results.

## Sample makefile

```makefile
#  Makefile template for Static library. 
# 1. Compile every *.cpp in the folder 
# 2. All obj files under obj folder
# 3. static library .a at lib folder
# 4. run 'make dirmake' before calling 'make'

CC = em++
OUT_FILE_NAME = libantlr4-runtime.a

CFLAGS = -O3 --llvm-lto 1 -std=c++11 
EMFLAGS=  -s DISABLE_EXCEPTION_CATCHING=0 \
					-s NO_EXIT_RUNTIME=1 \
					-s WASM=1 \
					-s BINARYEN_ASYNC_COMPILATION=0 \
					-s ALLOW_MEMORY_GROWTH=1 \
					-s AGGRESSIVE_VARIABLE_ELIMINATION=1
					
INC = -I src

OBJ_DIR=./obj

OUT_DIR=./dist

# Enumerating of every *.cpp as *.o and using that as dependency.	
# filter list of .c files in a directory.
# FILES =dump_l.c \
#	kter.c \
#
# $(OUT_FILE_NAME): $(patsubst %.c,$(OBJ_DIR)/%.o,$(wildcard $(FILES))) 
SOURCES = \
  $(wildcard src/*.cpp) \
  $(wildcard src/atn/*.cpp) \
  $(wildcard src/dfa/*.cpp) \
  $(wildcard src/misc/*.cpp) \
  $(wildcard src/support/*.cpp) \
  $(wildcard src/tree/*.cpp) \
  $(wildcard src/tree/pattern/*.cpp) \
  $(wildcard src/tree/xpath/*.cpp) \

# Enumerating of every *.cpp as *.bc and using that as dependency
$(OUT_FILE_NAME): $(patsubst src/%.cpp, $(OBJ_DIR)/%.bc, $(SOURCES))
	emar cr $(OUT_DIR)/$@ $^; ranlib $(OUT_DIR)/$@

dir_guard=@mkdir -p $(@D)
#Compiling every *.cpp to *.bc
$(OBJ_DIR)/%.bc: src/%.cpp
	$(dir_guard)
	$(CC) -c $(INC) $(CFLAGS) $(EMFLAGS) -o $@  $<
	
dirmake:
	@mkdir -p $(OUT_DIR)
	@mkdir -p $(OBJ_DIR)
	
clean:
	rm -f $(OBJ_DIR)/*.bc $(OUT_DIR)/$(OUT_FILE_NAME) Makefile.bak

rebuild: clean build
```