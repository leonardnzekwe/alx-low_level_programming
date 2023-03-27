#include "main.h"

/**
 * puts_half - function
 * @str: param
 */

void puts_half(char *str)
{
	int leo;
	int ray;

	while (str[leo] != '\0')
	{
		leo++;
	}
	if (leo % 2 == 0)
	{
		ray = leo / 2;
	}
	else
	{
		ray = (leo + 1) / 2;
	}
	while (ray < leo)
	{
		_putchar(str[ray]);
		ray++;
	}
	_putchar('\n');
}
