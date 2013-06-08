LLVM_COMPONENTS := \
	jit interpreter irreader nativecodegen codegen \
	bitreader bitwriter ipo linker instrumentation

CLANG_LIBS := \
	-lclangFrontend -lclangDriver -lclangSerialization \
	-lclangCodeGen -lclangParse -lclangSema -lclangEdit \
	-lclangAnalysis -lclangAST -lclangLex -lclangBasic

CPPFLAGS += $(shell llvm-config --cflags)
LDFLAGS += $(shell llvm-config --ldflags --libs $(LLVM_COMPONENTS))

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

all: $(EXES)

.cc.o:
	$(CXX) $(CPPFLAGS) -c $< -o $@

.o.out:
	$(CXX) $< $(CLANG_LIBS) $(LDFLAGS) -o $@

clean:
	$(RM) *.out *.o