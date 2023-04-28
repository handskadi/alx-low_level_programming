#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Mk hadi tat libiri lina list diyalna
 * @head: hadi la list li bghina nlibiriw
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
