#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - trouver la niode f position diyal list
 * @head: target la list tamzgarot g list
 * @index: La position dyial node (starting from 0).
 * Return: Pointer l node trouve
 **/


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	for (num = 0; num < index; num++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
