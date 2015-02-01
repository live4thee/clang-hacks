LLVM_COMPONENTS := bitreader mcparser transformutils option

CLANG_LIBS := \
	-lclangTooling -lclangASTMatchers \
	-lclangFrontend -lclangDriver -lclangSerialization \
	-lclangCodeGen -lclangParse -lclangSema -lclangEdit \
	-lclangAnalysis -lclangAST -lclangLex -lclangBasic

CPPFLAGS += -std=c++11
CPPFLAGS += $(shell llvm-config --cflags)
LDFLAGS += $(shell llvm-config --ldflags --libs $(LLVM_COMPONENTS))
LDFLAGS += -lz -lcurses -pthread -ldl

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

.PHONY: all clean
all: $(EXES)

.o.out:
	$(CXX) $< $(CLANG_LIBS) $(LDFLAGS) -o $@

clean:
	$(RM) *.out *.o
