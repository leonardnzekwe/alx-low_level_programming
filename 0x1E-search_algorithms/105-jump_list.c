#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of ints using Jump search.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: A pointer to the first node where 'value' is located,
 * or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);  /* Calculate the jump step */
	listint_t *prev = NULL, *curr = list;

	if (!list)
		return (NULL);

	while (curr->next && curr->n < value)
	{
		size_t i;

		prev = curr;
		/* Jump to the next block */
		for (i = 0; i < step && curr->next; i++)
			curr = curr->next;

		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, curr->index
	);

	/* Perform linear search in the current block */
	while (prev && prev->index <= curr->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
