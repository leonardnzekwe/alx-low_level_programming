#include "lists.h"

/**
 * get_nodeint_at_index - singly linked list function
 * @index: is the index of the node, starting at 0
 * @head: listint_t member passed as argument
 * Return: the nth node of a listint_t linked list
 * if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL && count < index)
	{
		count++;
		head = (*head).next;
	}
	return (head);
}
