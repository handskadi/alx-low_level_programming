#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - supprimi node mn list
 * @head: address diyal node lwla
 * @index: Position dyal node l delta
 * Return: c'est ca march (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *active, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	active = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (active->next == NULL)
			return (-1);
		active = active->next;
	}
	next = active->next;
	active->next = next->next;
	free(next);
	return (1);
}
