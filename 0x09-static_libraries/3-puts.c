#include "main.h"

/**
 * _puts - function
 * @str: param
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
