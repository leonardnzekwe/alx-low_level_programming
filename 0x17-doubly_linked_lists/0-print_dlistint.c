#include "lists.h"

/**
 * print_dlistint - double linked list function
 * @h: head parameter
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;
	const dlistint_t *ptr;

	if (h == NULL)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		node_num = node_num + 1;
		printf("%d\n", (*ptr).n);
		ptr = (*ptr).next;
	}
	return (node_num);
}
