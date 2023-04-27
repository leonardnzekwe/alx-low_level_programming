#include "lists.h"

/**
 * list_len - singly list function
 * @h: node parameter passed
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int num_elements;

	num_elements = 0;
	while (h != NULL)
	{
		num_elements++;
		h = (*h).next;
	}
	return (num_elements);
}
