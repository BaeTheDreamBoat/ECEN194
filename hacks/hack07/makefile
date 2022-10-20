#
# makefile for image utilities C library
#

CC = gcc
FLAGS = -Wall --std=gnu99 -g
INCLUDES = -lm

.DEFAULT_GOAL := imageDriver

all: imageDriver imageMaker arrayUtilsTester

imageDriver: imageUtils.o imageDriver.c
	$(CC) $(FLAGS) imageUtils.o imageDriver.c -o imageDriver $(INCLUDES)

imageMaker: imageUtils.o imageMaker.c
	$(CC) $(FLAGS) imageUtils.o imageMaker.c -o imageMaker $(INCLUDES)

imageUtils.o: imageUtils.c imageUtils.h
	$(CC) $(FLAGS) -c imageUtils.c -o imageUtils.o $(INCLUDES)

arrayUtilsTester: array_utils.o arrayUtilsTester.c
	$(CC) $(FLAGS) array_utils.o arrayUtilsTester.c -o arrayUtilsTester $(INCLUDES)

array_utils.o: array_utils.c array_utils.h
	$(CC) $(FLAGS) -c array_utils.c -o array_utils.o $(INCLUDES)

clean:
	rm -fR *~ *.o *.dSYM
