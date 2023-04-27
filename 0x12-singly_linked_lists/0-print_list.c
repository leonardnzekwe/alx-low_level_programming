#include "lists.h"

/**
 * print_list - singly list function
 * @h: parameter passed
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		if ((*h).str != NULL)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		num_nodes++;
		h = (*h).next;
	}
	return (num_nodes);
}
