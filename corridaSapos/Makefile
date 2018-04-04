#Makefile for "corridaSapos" C++ application
#Created by Hand 22/02/2017

PROG = corridaSapos
CC = g++
cppflags = -O0 -g -W -Wall -pedantic
OBJS = main.o corridaSapos.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o: corridaSapos.hpp
	$(CC) $(CPPFLAGS) -c main.cpp

corridaSapos.o: corridaSapos.hpp
	$(CC) $(CCPFLAGS) -c corridaSapos.cpp

clean:
	rm -f *.o
