CC = gcc
CFLAGS = -Wall
PROG = geometry

MAKE_DIR = $(PWD)
SRCS = ring.c quadCube.c objLoader.c
OBJS = ring.o quadCube.o objLoader.o

INCLUDE_PATHS = -I C:/Users/wonde/OneDrive/Documents/Programming/PySolar/libs/GLFW
LIBRARY_PATHS = -L C:/Users/wonde/OneDrive/Documents/Programming/PySolar/libs

all : do_precomp target clean
.PHONY: all

test : debug_compile
.PHONY: test

debug_compile : CFLAGS += -DDEBUG
debug_compile : do_precomp target clean

do_precomp:
	$(CC) $(CFLAGS) -c $(SRCS)

target:
	ar rcs $(PROG).a $(OBJS)

clean:
	rm *.o