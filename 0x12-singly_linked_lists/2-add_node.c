#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Mk, Hadi ghadi t ajouti lina node l list_t
 * @head:  pointer doubli l list
 * @str: hadi hiya string li ghadi t ajouta l node
 * Return: i returrni lina address diyal liliment wala null ila madaztch
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
