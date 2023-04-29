#include "lists.h"

/**
 * free_listint - vider la list
 * @head: la list li ghadi tvida
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
