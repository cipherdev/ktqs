all:
	g++ -o advanced advanced.c -lpthread -shared -fPIC
clean:
	rm -rf advanced advanced.so
	
#all: advanced
#advanced: advanced.o
#	gcc -o advanced advanced.o
#advanced.o: advanced.c
#	gcc -c advanced.c
#clean:
#	rm -rf advanced advanced.o
# Define required macros here
#SHELL = /bin/sh

#OBJS =  advanced.o
#CFLAG = -Wall -g
#CC = gcc
#INCLUDE =
#LIBS = -lm

#advanced:${OBJ}
#	${CC} ${CFLAGS} ${INCLUDES} -o $@ ${OBJS} ${LIBS}

#clean:
#	-rm -f *.o 
#.c.o:
#	${CC} ${CFLAGS} ${INCLUDES} -c $<
