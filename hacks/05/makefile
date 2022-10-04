CC = gcc -std=gnu99
FLAGS = -Wall
INCLUDES = -lm

utilsTester: utils.o utilsTester.c
	$(CC) $(FLAGS) utils.o utilsTester.c -o utilsTester $(INCLUDES)

utils.o: utils.c utils.h
	$(CC) $(FLAGS) $(INCLUDES) -c utils.c -o utils.o

clean:
	rm -f *~ *.o	