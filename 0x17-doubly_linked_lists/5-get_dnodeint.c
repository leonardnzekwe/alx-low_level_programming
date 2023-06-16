#include "lists.h"

/**
 * get_dnodeint_at_index - double linked list function
 * @head: node head
 * @index: node index
 * Return: the nth node of a dlistint_t linked list
 * if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *ptr;

	ptr = head;
	for (count = 0; ptr != NULL; count++)
	{
		if (count == index)
		{
			return (ptr);
		}
		ptr = ptr->next;
	}
	return (NULL);
}
