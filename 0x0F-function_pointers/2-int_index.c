#include "function_pointers.h"

/**
 * int_index -function
 * @array: array to search through
 * @size: array size
 * @cmp: pointer to function
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	if (array != 0 && cmp != 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
