#include "main.h"

/**
 * flip_bits - bit manipulation function
 * that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: bit manipulation parameter
 * @m: bit manipulation parameter
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;

	i = n ^ m;
	j = 0;
	while (i != 0)
	{
		j = j + (i & 1);
		i >>= 1;
	}
	return (j);
}
