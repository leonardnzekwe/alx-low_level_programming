#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * Return: Index of the first occurrence of value, or -1 if not found or NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int i;
	int step = (int)sqrt(size);
	int prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	while (array[prev] < value)
	{
		prev += step;
		if (prev >= (int)size)
			break;
		if (array[prev] < value)
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
