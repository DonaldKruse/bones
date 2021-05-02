CC=gcc
CFLAGS=-g -Wall 
INC=-Iinclude/
SRC=src


bones: main.c bones-common.o
	$(CC) $(CFLAGS) $(INC) $@ $(SRC)/main.c

bones-common.o:
	$(CC) $(CFLAGS) $(INC) -c -o $@ $(SRC)/bones-common.c

clean:
	rm -r *~
