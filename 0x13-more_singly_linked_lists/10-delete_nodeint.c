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
	listint_t *active, *suivant;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		suivant = (*head)->suivant;
		free(*head);
		*head = suivant;
		return (1);
	}
	active = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (active->suivant == NULL)
			return (-1);
		active = active->suivant;
	}
	suivant = active->suivant;
	active->suivant = suivant->suivant;
	free(suivant);
	return (1);
}
