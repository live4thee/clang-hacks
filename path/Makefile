CPPFLAGS += $(shell llvm-config --cflags)
LDFLAGS += $(shell llvm-config --ldflags --libs core)

SRCS := $(wildcard *.cc)
OBJS := $(SRCS:.cc=.o)
EXES := $(SRCS:.cc=.out)

all: $(EXES)

.cc.o:
	$(CXX) $(CPPFLAGS) -c $< -o $@

.o.out:
	$(CXX) $< $(LDFLAGS) -o $@

clean:
	$(RM) *.out
