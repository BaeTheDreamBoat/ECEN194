CC = gcc
FLAGS = -Wall --std=gnu99 -g
INCLUDES = -lm

stringTester: string_utils.o stringTester.c
	$(CC) $(FLAGS) string_utils.o string_utils.c -o stringTester $(INCLUDES)

string_utils.o: string_utils.c string_utils.h
	$(CC) $(FLAGS) -c string_utils.c -o string_utils.o $(INCLUDES)

clean:
	rm -fR *.o