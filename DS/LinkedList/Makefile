./main.exe    : main.o LLIST.o
    gcc main.o LLIST.o -o main.exe
main.o    : main.c LLIST.h
    gcc -c main.c
LLIST.o    : LLIST.o LLIST.h
    gcc -c LLIST.c