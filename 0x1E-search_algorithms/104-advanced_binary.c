#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using
 * advanced binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: Index of the first occurrence of value, or -1 if not found or NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary.
 * @array: Pointer to the first element of the array to search in.
 * @first_index: The first index of the current subarray.
 * @last_index: The last_index index of the current subarray.
 * @value: The value to search for.
 * Return: Index of the first occurrence of value, or -1 if not found.
 */
int advanced_binary_recursive(int *array, size_t first_index,
	size_t last_index, int value)
{
	size_t mid;

	if (first_index > last_index)
		return (-1);

	mid = first_index + (last_index - first_index) / 2;

	print_array(array, first_index, last_index);

	if (array[mid] == value)
	{
		if (mid == first_index || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, first_index, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, last_index, value));
	else
		return (advanced_binary_recursive(array, first_index, mid - 1, value));
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
