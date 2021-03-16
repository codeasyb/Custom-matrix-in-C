

CC = clang
CFLAGS = -Wall -g

all: mainapp

mainapp: main.o matrix.o ui.o
	$(CC) $(CFLAGS) main.o matrix.o ui.o -o mainapp

# example
#main.o: main.c
#	$(CC) $(CFLAGS) -c main.c
#
#tools.o: tools.c
#	$(CC) $(CFLAGS) -c tools.c

# simplified version
%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean: rm a.out *.o mainapp
