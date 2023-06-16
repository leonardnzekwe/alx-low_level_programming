#include "lists.h"

/**
 * sum_dlistint - double linked list function
 * @head: node head
 * Return: the sum of all the data (n) of a dlistint_t linked list
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
