#include "variadic_functions.h"

/**
 * sum_them_all - variadic function
 * @n: named parameter
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		sum = 0;
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(args, int);
		}
		va_end(args);
		return (sum);
	}
}
