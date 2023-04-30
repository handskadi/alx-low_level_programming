#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - ajouti node f lgiven position
 * @head: addresss diyal node lwla
 * @idx: Position diyal node li pret a etre encesse
 * @n: Data diyal node lwlania
 * Return: l address diyal node lwlania
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node, *tmp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	tmp = *head;
	for (; i < idx - 1 && tmp != NULL; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	}
	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	n_node->next = tmp->next;
	tmp->next = n_node;
	return (n_node);
}
