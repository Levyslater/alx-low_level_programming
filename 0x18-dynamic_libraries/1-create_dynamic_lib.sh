#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -c -fpic *.c
gcc -shared -o liball.so *.o
