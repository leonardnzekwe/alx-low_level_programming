#include "main.h"

/**
 * _puts_recursion - function
 * @s: param
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}
}
