#include "main.h"

/**
 * print_last_digit - Function
 * @n: Parameter
 * Return: last
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (n * -1) % 10;
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + '0');
	return (last);
}
