#include "lists.h"

/**
 * add_nodeint_end - singly list function
 * That adds a new node at the end of a listint_t list.
 * @head: listint_t member pased as parameter
 * @n: data of head passed as parameter
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).n = n;
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
