#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Mk, code li ghadi ilisti lina les elemts diyal print_list
 * @h: smiya diyal list
 * Return: hadi ghadi returni lina, Mkcounts
 */
size_t print_list(const list_t *h)
{
	int MKcounts = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		MKcounts++;
		h = h->next;
	}
	return (MKcounts);
}
