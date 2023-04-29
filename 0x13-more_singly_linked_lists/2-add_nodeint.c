#include "lists.h"

/**
 * add_nodeint - ajouti wa7d node f lbdia diyal la list .
 * @head: tadgh datpointa sar node tamzgarot n list
 * @n: data n nchkcham agnso n node
 * Return: anpointa sar node tojdid nghad Null ig walo
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fresh;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
