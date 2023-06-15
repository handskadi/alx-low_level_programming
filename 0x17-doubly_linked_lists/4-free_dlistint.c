#include "lists.h"

/**
 * free_dlistint - clear, empty the linked dlistint_t list.
 * @head: Head dyial dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
