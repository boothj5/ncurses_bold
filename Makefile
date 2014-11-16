CC=gcc
LDFLAGS=-lncurses
CFLAGS=-Wall -Werror -Wextra

bold: bold.o

.PHONY: clean
clean:
	rm -f *.o
	rm -f bold
