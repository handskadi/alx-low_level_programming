#include "lists.h"

/**
 * get_dnodeint_at_index - Localizi node f doubly linkled list
 * @head: Lhead diyal dlistint_t list.
 * @index: Head li ghan localiziw
 *
 * Return: Null if success or address of the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
