#include "lists.h"
#include <stdio.h>

/**
 * list_len - Mk, function li ghadi triturni lina number of element f list
 * list_t list.
 * @h: hada howa lpointer diyal list
 * Return: dok leelment li ghadi itreturnaw homa MKn
 */
size_t list_len(const list_t *h)
{
	size_t MKn = 0;

	while (h)
	{
		MKn++;
		h = h->next;
	}
	return (MKn);
}
