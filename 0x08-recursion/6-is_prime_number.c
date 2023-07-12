#include "main.h"

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (!is_divisible(n, n - 1));
}

/**
 * is_divisible - Helper function to check if a number is divisible
 * By any number in a given range
 * @n: The number to check for divisibility
 * @divisor: The divisor to check
 *
 * Return: 1 if the number is divisible by the divisor, 0 otherwise
 */

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
		return (0);

	if (n % divisor == 0)
		return (1);

	return (is_divisible(n, divisor - 1));
}
