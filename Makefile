.PHONY: clean all
CC = gcc
AR = ar
FLAGS= -Wall -g

all: connections 

connections: main.o my_matlib.so
	$(CC) $(FLAGS)  -o connections main.o ./my_matlib.so
my_matlib.so: my_mat.o 
	$(CC) -shared -o my_matlib.so my_mat.o 
my_mat.o: my_mat.c my_mat.h 
	$(CC) $(FLAGS)  -fPIC -c my_mat.c 
main.o: main.c my_mat.h 
	$(CC) $(FLAGS)  -c main.c
clean:
	rm -f *.o *.so connections 