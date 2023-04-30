#include "lists.h"

/**
 * free_listint2 - singly list function that frees a listint_t list
 * @head: listint_t member passed as argument
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (**head).next;
		free(tmp);
	}
	*head = NULL;
}
