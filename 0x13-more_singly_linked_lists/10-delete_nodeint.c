#include "lists.h"

/**
 * delete_nodeint_at_index - singly linked list function
 * That deletes the node at index index of a listint_t linked list
 * @head: listint_t member parameter
 * @index: is the index of the node that should be deleted
 * Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	prev = NULL;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = (*current).next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*current).next;
	}
	else
	{
		(*prev).next = (*current).next;
	}
	free(current);
	return (1);
}
