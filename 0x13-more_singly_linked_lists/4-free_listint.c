#include "lists.h"

/**
 * free_listint - singly list function that frees a listint_t list.
 * @head: listint_t member passed as paramter
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = (*head).next;
		free(tmp);
	}
}
