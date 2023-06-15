#include "lists.h"

/**
 * add_dnodeint - N ajoutiw wa7d node jdida b start dyal dlistint_t list.
 * @head: wa7d ptr lrass dyal node d dlistint_t list.
 * @n: int  l had nouvou node li thazo
 *
 * Return: Null if failed or address on new node if success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
