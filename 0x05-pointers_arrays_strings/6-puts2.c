#include "main.h"

/**
 * puts2 - function
 * @str: param
 */

void puts2(char *str)
{
	int ray = 0;
	int leo = 0;

	while (str[ray] != '\0')
	{
		ray++;
	}
	while (leo < ray)
	{
		_putchar(str[leo]);
	}
	_putchar('\n');
}
