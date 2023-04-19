#include "function_pointers.h"

/**
 * print_name - function
 * @name: param
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
