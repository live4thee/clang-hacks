CPPFLAGS += $(shell llvm-config --cflags)
LDFLAGS += $(shell llvm-config --ldflags --libs core)

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

.PHONY: all clean
all: $(EXES)

.o.out:
	$(CXX) $< $(LDFLAGS) -o $@

clean:
	$(RM) *.out
