#include "lists.h"

/**
 * dlistint_len - double linked list function
 * @h: head parameter
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;
	const dlistint_t *ptr;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		num_nodes++;
		ptr = (*ptr).next;
	}
	return (num_nodes);
}
