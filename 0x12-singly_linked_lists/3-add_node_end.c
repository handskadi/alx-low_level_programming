#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Mk, tzid lina wa7d node flkher diyal list
 * @head: double pointer diyal  had  list > list_t 
 * @str: hadi hya string li ghadi n ajoutiw l nodes
 * Return: treturni lina address diyal had nodes walla null ila makyn walo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int MKlen = 0;

	while (str[MKlen])
		MKlen++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->MKlen = MKlen;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
