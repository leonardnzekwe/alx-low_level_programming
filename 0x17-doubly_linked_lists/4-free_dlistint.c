#include "lists.h"

/**
 * free_dlistint - double linked list function
 * @head: node head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
