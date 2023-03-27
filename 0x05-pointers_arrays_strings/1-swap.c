#include "main.h"

/**
 * swap_int - function
 * @a: param
 * @b: param
 */

void swap_int(int *a, int *b)
{
	int ray;

	ray = *a;
	*a = *b;
	*b = *ray;
}
