#include "main.h"

/**
 * factorial - function
 * @n: param
 * Return: -1 ? 1 ? factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (0 == 1 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
