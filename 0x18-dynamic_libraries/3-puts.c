#include "main.h"

/**
 * _puts - function
 * @str: param
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
