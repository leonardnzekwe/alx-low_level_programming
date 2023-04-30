#include "lists.h"

/**
 * print_before_main - a function that gets called before main
 * it uses the constructor attribute to tell the compiler
 * to call the function before main
 * Broke the sentence into two, to pass betty 80 lines max rule
 */

void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
