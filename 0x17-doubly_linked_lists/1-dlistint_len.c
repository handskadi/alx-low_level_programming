#include "lists.h"

/**
 * dlistint_len - n7sbo ch7al men elem f list
 * @h: H = head diyal dlistint_t list.
 *
 * Return: le element li kiynin f dlistint
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
