#include "lists.h"

/**
 * print_listint - singly list function
 * That prints all the elements of a listint_t list
 * @h: listint_t member passed as parameter
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (count);
}
