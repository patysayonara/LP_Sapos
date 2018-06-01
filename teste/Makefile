#Makefile for "teste" C++ application
#Created by Hand 22/02/2017

PROG = teste
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o teste.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: teste.hpp
	$(CC) $(CPPFLAGS) -c main.cpp

teste.o: teste.hpp
	$(CC) $(CCPFLAGS) -c teste.cpp

clean: 
	rm -f *.o
