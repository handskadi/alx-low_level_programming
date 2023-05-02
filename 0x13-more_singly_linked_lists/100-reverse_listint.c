#include "lists.h"

/**
 * reverse_listint - linkedlist blm9lob
 * @head: pointer l node lwlaniya f la list
 * Return: returni pointer diyal first nod g la list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
