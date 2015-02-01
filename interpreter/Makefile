CLANG_LIBS := \
	-lclangFrontend -lclangDriver -lclangSerialization \
	-lclangCodeGen -lclangParse -lclangSema -lclangEdit \
	-lclangAnalysis -lclangAST -lclangLex -lclangBasic

CPPFLAGS += -std=c++11 -ggdb
CPPFLAGS += $(shell llvm-config --cflags)
LDFLAGS += $(shell llvm-config --ldflags --libs)
LDFLAGS += -lz -lncurses -pthread -ldl

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

.PHONY: all clean
all: $(EXES)

.o.out:
	$(CXX) $< $(CLANG_LIBS) $(LDFLAGS) -o $@

clean:
	$(RM) *.out *.o
