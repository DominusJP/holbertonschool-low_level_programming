#!bin/bash
gcc -Wall -pedantic -Werror -Wxtra -c *.c
ar -rc liball.a *.o
ranlib liball.a
