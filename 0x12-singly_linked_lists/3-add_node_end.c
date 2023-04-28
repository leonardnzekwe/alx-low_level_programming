#include "lists.h"

/**
 * add_node_end - singly list function
 * That adds a new node at the end of a list_t list
 * @head: first node parameter
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = NULL;
	if (*head == NULL)
	{
		*head = new;
		tail = new;
	}
	else
	{
		tail = *head;
		while ((*tail).next != NULL)
		{
			tail = (*tail).next;
		}
		(*tail).next = new;
	}
	return (new);
}
