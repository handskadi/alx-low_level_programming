#include "lists.h"

/**
 * print_dlistint - anprinti kolchi les element n la list dagh
 * @h: H = head dyal la list
 *
 * Return: n returniw les nodes li kyin f list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
