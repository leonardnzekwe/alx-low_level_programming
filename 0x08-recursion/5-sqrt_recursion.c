#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 * The natural square root of a number
 * @n: number parameter
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_check(n, 0));
}


/**
 * sqrt_check - Checks for the square root of n using recursion
 * @n: The number to find the square root of
 * @q: The current q for the square root
 *
 * Return: The square root if found, -1 otherwise
 */

int sqrt_check(int n, int q)
{
	if (q * q == n)
		return (q);
	else if (q * q > n)
		return (-1);
	else
		return (sqrt_check(n, q + 1));
}
