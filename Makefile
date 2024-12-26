CC=gcc
CFLAGS=-Wall -fPIC
LDFLAGS=-L.

# Calculator targets
calc: libcalc.a main.o
	$(CC) $(LDFLAGS) -o calc main.o -lcalc -lm

libcalc.a: calc.o
	ar rcs libcalc.a calc.o

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

main.o: main.c calc.h
	$(CC) $(CFLAGS) -c main.c

# Text formatter targets
libconvert.so: convert.o
	$(CC) -shared -o libconvert.so convert.o

convert.o: convert.c convert.h
	$(CC) $(CFLAGS) -c convert.c

upper: upper.c libconvert.so
	$(CC) $(CFLAGS) -o upper upper.c -L. -lconvert

lower: lower.c libconvert.so
	$(CC) $(CFLAGS) -o lower lower.c -L. -lconvert

# Build all targets
all: calc upper lower

clean:
	rm -f *.o *.a *.so calc upper lower

install:
	sudo cp libconvert.so /usr/local/lib/
	sudo ldconfig

.PHONY: all clean install

