#include "lists.h"

/**
 * sum_dlistint - Ljam3 diyal data dyal a dlistint_t list.
 * @head: head diyal doubly linked list
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	nt sum = 0;
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
