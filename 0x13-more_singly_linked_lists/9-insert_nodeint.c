#include "lists.h"

/**
 * insert_nodeint_at_index - singly linked list function
 * That inserts a new node at a given position
 * @head: listint_t member parameter
 * @idx: index of the list where the new node should be added
 * Index starts at 0
 * @n: is the value of the listin_t struct
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		(*new).n = n;
		(*new).next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < (idx - 1) && current != NULL; i++)
	{
		current = (*current).next;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	(*new).n = n;
	(*new).next = (*current).next;
	(*current).next = new;
	return (new);
}
