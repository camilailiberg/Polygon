CC=gcc
CFLAGS=-I. -g -w
DEPS = polygon.h
OBJ = polygon.o add.o summary.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

polygon: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
