#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c operations.c
gcc -shared -o 100-operations.so operations.o
nm -D --defined-only 100-operations.so
