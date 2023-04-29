#include "lists.h"

/**
 * add_nodeint - singly list function
 * That adds a new node at the beginning of a listint_t list
 * @head: listint_t member passed as paramter
 * @n: data of head passed as parameter
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).n = n;
	(*new).next = *head;
	*head = new;
	return (new);
}
