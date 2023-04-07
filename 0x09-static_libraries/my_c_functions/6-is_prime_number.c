#include "main.h"

/**
 * is_prime_number - function
 * @n: param
 * Return: value
 */

int is_prime_number(int n)
{
	return (_prime(2, n));
}

/**
 * _prime - function
 * @num: param
 * @root: param
 * Return: value
 */

int _prime(int num, int root)
{
	if (root % num == 0 || root < 2)
	{
		return (0);
	}
	else if (num == (root - 1))
	{
		return (1);
	}
	else if (root > num)
	{
		return (_prime(num + 1, root));
	}
	else
	{
		return (1);
	}
}
