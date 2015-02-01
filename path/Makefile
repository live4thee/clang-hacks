CPPFLAGS += $(shell llvm-config --cflags) -std=c++11
LDFLAGS += $(shell llvm-config --ldflags --libs core)
LDFLAGS += -lncurses -pthread -ldl

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

.PHONY: all clean
all: $(EXES)

.o.out:
	$(CXX) $< $(LDFLAGS) -o $@

clean:
	$(RM) *.out
