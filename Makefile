CC = gcc
CFLAGS = -lm
DEPS = vars.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
main: main.o
	$(CC) -o main.x86_64 main.o $(CFLAGS)

.PHONY: clean

clean:
	rm -f main.o
