#include "lists.h"

/**
 * sum_listint - singly linked list function
 * @head: listint_t member passed as parameter
 * Return: the sum of all the data (n) of a listint_t linked lis
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + (*head).n;
		head = (*head).next;
	}
	return (sum);
}
