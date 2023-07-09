#!/bin/bash
gcc -Wall -wextra -Werror -pendantic -c *.c
ar rc liball.a *.o
