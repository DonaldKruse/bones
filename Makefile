CC=gcc
CFLAGS=-g -Wall -o bones
INC=-Iinclude/
SRC=src

bones: 
	$(CC) $(CFLAGS) $(INC) $(SRC)/main.c


clean:
	rm -r *~
