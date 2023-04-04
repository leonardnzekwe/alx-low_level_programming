#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: param
 * @size: param
 */

void print_diagsums(int *a, int size)
{
	int leo;
	int ray = 0;
	int rose = 0;

	for (leo = 0; leo < (size * size); leo = leo + size + 1)
	{
		ray = ray + a[leo];
	}
	for (leo = size - 1; leo < (size * size - 1); leo = leo + size - 1)
	{
		rose = rose + a[leo];
	}
	printf("%d, %d\n", ray, rose);
}
