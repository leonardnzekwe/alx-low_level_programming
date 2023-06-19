#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c operations.c
gcc -shared -o lib100-operations.so operations.o
nm -D --defined-only lib100-operations.so
