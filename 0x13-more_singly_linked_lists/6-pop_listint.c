#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - sofghd element amzgarou g lalist iga linked
 * @head: Pointer sar  la list
 * Return: L9ima diyal
 **/

int pop_listint(listint_t **head)
{
	listint_t *t;
	int ls_value;

	if (!(*head != NULL))
		return (0);

	t = *head;
	*head = t->next;
	ls_value = t->n;
	free(t);
	return (ls_value);
}
