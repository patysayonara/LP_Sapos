#Makefile for "distanciaSapo" C++ application
#Created by Hand 22/02/2017

PROG = distanciaSapo
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o sapo.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: sapo.hpp
	$(CC) $(CPPFLAGS) -c main.cpp

sapo.o: sapo.hpp
	$(CC) $(CPPFLAGS) -c sapo.cpp

clean:
	rm -f *.o
