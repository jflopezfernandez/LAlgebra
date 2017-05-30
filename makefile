<<<<<<< HEAD
CPP := g++
CPPFLAGS := -g -Wall -Wextra

program := test

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

$(program): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(program) $(SRCS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CPPFLAGS) $(SRCS)
=======
CC32=C:\mingw32\mingw32-7.1.0\bin\g++
CC64=C:\mingw64\mingw64-7.1.0 POSIX SEH\mingw64\bin\g++

CC=$(CC64)

OUTPUT=-o LAlgebra
OBJS=main.o number.o utils.o
CFLAGS=-c


all: LAlgebra.exe

LAlgebra.exe: $(OBJS)
	$(CC) $(OUTPUT) $(OBJS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
	
number.o: number.cpp
	$(CC) $(CFLAGS) number.cpp

utils.o: utils.cpp
	$(CC) $(CFLAGS) utils.cpp
>>>>>>> 721252cd6edced3a4d827f61db50d5e1d342da5f
