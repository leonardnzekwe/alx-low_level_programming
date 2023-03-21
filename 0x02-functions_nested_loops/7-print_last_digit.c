#include "main.h"

/**
 * print_last_digit - Function
 * @n: Parameter
 * Return: c
 */
int print_last_digit(int n)
{
	int n;

	if (n < 0)
	{
		c = (n * -1) % 10;
	}
	else
	{
		c = n % 10;
	}
	_putchar(c + '0');
	return (c % 10);
}
