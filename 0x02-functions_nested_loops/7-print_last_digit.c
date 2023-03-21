#include "main.h"

/**
 * print_last_digit - Function
 * @c: Parameter
 * Return: c
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * -1;
	}
	_putchar((c % 10) + '0');
	return (c % 10);
}
