#include "lists.h"

/**
 * pop_listint - singly linked list function
 * That deletes the head node of a listint_t linked list
 * @head: listint_t head node passed as parameter
 * Return: the head node’s data (n)
 * if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	data = (**head).n;
	tmp = *head;
	*head = (**head).next;
	free(tmp);
	return (data);
}
