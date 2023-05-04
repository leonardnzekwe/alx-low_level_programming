#include "main.h"

/**
 * print_binary - bit manipulation function
 * That prints the binary representation of a number
 * @n: The number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int len;

	m = 1;
	len = 0;
	while ((n >> len) > 0)
	{
		len++;
	}
	if (len == 0)
	{
		_putchar('0');
		return;
	}
	for (len = len - 1; len >= 0; len--)
	{
		if ((n >> len) & m)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
