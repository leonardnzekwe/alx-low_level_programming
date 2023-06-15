#include "lists.h"

/**
 * add_dnodeint - double linked list function
 * @head: node head
 * @n: node data
 * Return: the address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	new->next = *head;
	if (*head != NULL)
		(**head).prev = new;
	*head = new;

	return (new);
}
