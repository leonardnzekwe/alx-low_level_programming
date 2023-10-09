#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 * Assumptions, that the array will be sorted in ascending order
 * Assumptions, that the value won’t appear more than once in array
 * If value is not present in array or if array is NULL, returns -1
 */
int binary_search(int *array, size_t size, int value)
{
	int first_index, last_index, mid_index;

	if (array == NULL)
		return (-1);

	first_index = 0;
	last_index = size - 1;
	while (first_index <= last_index)
	{
		mid_index = first_index + (last_index - first_index) / 2;
		print_array(array, first_index, last_index);
		if (array[mid_index] == value)
			return (mid_index);
		else if (array[mid_index] < value)
			first_index = mid_index + 1;
		else
			last_index = mid_index - 1;
	}
	return (-1);
}

/**
 * print_array - a helper function to binary_search function
 * That prints array partitioning
 * @array: array to be printed
 * @first_index: first index of array
 * @last_index: last_index of array
 */
void print_array(int *array, int first_index, int last_index)
{
	int index;

	printf("Searching in array: ");
	for (index = first_index; index <= last_index; index++)
	{
		printf("%d", array[index]);
		if (index < last_index)
			printf(", ");
	}
	printf("\n");
}
