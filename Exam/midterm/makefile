#
# makefile for midterm
#

CC = gcc
FLAGS = -Wall --std=gnu99 -g
INCLUDES = -lm

midterm.o: midterm.c midterm.h
	$(CC) $(FLAGS) -c midterm.c -o midterm.o $(INCLUDES)

midtermTest: midterm.o midterm.c
	$(CC) $(FLAGS) midterm.o midtermTest.c -o midtermTest $(INCLUDES)

clean:
	rm -fR *~ *.o

// gcc -Wall --std=gnu99 -g -c midterm.c -o midterm.o -lm && gcc -Wall --std=gnu99 -g midterm.o midtermTest.c -o midtermTest -lm && ./midtermTest