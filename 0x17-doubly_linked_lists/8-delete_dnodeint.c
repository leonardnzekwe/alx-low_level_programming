#include "lists.h"

/**
 * delete_dnodeint_at_index - double linked list function
 * @head: node head
 * @index: node index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (**head).next;
		if (*head != NULL)
			(**head).prev = NULL;
		free(current);
		return (1);
	}

	current = *head;
	while (index > 0)
	{
		if (current == NULL)
			return (-1);
		prev = current;
		current = current->next;
		index--;
	}

	prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = prev;
	free(current);
	return (1);
}
