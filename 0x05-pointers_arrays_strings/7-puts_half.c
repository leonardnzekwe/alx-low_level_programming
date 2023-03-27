#include "main.h"

/**
 * puts_half - function
 * @str: param
 */

void puts_half(char *str)
{
	int leo = 0;
	int ray;

	while (str[leo] != '\0')
	{
		leo++;
	}
	if (leo % 2 == 0)
	{
		ray = (leo - 1) / 2;
		ray += 1;
	}
	else
	{
		ray = leo / 2;
	}
	for (; ray < leo; ray++)
	{
		_putchar(str[ray]);
	}
	_putchar('\n');
}
