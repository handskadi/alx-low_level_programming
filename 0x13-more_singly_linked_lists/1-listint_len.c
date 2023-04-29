#include "lists.h"

/**
 * listint_len - f linkint list returni lina kolchi les elements
 * @h: linked list dyal type d listint__t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t MK_number = 0;

	while (h)
	{
		MK_number++;
		h = h->next;
	}

	return (MK_number);
}
