#include "lists.h"

/**
 * insert_dnodeint_at_index - doubly linked list function
 * @h: node head
 * @idx: node index
 * @n: node data
 * Return:  the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr1, *ptr2;
	dlistint_t *new;
	unsigned int current = 1;

	if (*h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	ptr1 = *h;
	while (ptr1 != NULL && current != idx)
	{
		current = current + 1;
		ptr1 = ptr1->next;
	}
	if (current != idx)
		return (NULL);
	ptr2 = ptr1->next;
	ptr1->next = new;
	if (ptr2 != NULL)
		ptr2->prev = new;
	new->prev = ptr1;
	new->next = ptr2;
	return (new);
}
