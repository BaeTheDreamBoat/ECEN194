CC = gcc
FLAGS = -Wall --std=gnu99 -g
INCLUDES = -lm

string_utils.o: string_utils.c string_utils.h
	$(CC) $(FLAGS) -c string_utils.c -o string_utils.o $(INCLUDES)

stringTester: string_utils.o string_utils.c
	$(CC) $(FLAGS) string_utils.o string_utils.c -o string_utils $(INCLUDES)

clean:
	rm -fR *.o