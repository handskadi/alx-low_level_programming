#include "lists.h"

/**
 * add_nodeint_end - ajoutiw wa7d fresh node la fin dyal list
 * @head: pointi sa element amzgaro g la list
 * @n: data ngnso n node
 * Return: pointer sar fresh node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh;
	listint_t *temp = *head;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
	{
		*head = fresh;
		return (fresh);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = fresh;

	return (fresh);
}
