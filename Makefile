# Makefile for Hello World project

hello: main.o hello.o
	gcc -o hello main.o hello.o

main.o: main.c
	gcc -c main.c

hello.c: hello.c
	gcc -c hello.c

clean:
	rm -f *.o hello
