#include "main.h"

/**
 * reverse_array - function
 * @a: param
 * @n: param
 */

void reverse_array(int *a, int n)
{
	int ray = 0;
	int leo;

	while (ray < n--)
	{
		leo = a[ray];
		a[ray++] = a[n];
		a[n] = leo;
	}
}
