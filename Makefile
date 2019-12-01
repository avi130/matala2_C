CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB= myBank.o 
FLAGS= -Wall -g



all:  mybanks mains 	

mybanks: $(OBJECTS_LIB) 
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)	

mains: $(OBJECTS_MAIN) libmyBank.a 
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyBank.a

myBank.o: myBank.c myBank.h 
	$(CC) $(FLAGS) -c myBank.c

main.o: main.c myBank.h   
	$(CC) $(FLAGS)  -c main.c 

.PHONY: clean all  mybanks

clean:
	rm -f *.o *.a *.so mains 