all: check copy
check: main.o
	gcc main.o -o look
main.o: main.c
	gcc -c main.c -o main.o

copy: copy.o
	gcc -o copy copy.o
copy.o: copy.c
	gcc -o copy.o -c copy.c

