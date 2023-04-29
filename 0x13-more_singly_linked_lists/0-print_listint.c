#include "lists.h"

/**
 * print_listint - hadi ghadi tprinti lina kolchi les lement dial listint.
 * @h: hadi tatchir l_isted link men type listlink
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
