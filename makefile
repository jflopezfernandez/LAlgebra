CPP := g++
CPPFLAGS := -g -Wall -Wextra

program := test

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

$(program): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(program) $(SRCS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CPPFLAGS) $(SRCS)