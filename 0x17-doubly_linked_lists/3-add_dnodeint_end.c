#include "lists.h"

/**
 * add_dnodeint_end - double linked list function
 * @head: node head
 * @n: node data
 * Return: the address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}
