#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - khwi lina listint
 * @head: joj pointers l lelement lwlani
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
