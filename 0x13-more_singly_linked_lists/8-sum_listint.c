#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - ljem3 dyala data
 * @head: target node tamzarot g list
 * Return: the_sum igan intiger
 **/

int sum_listint(listint_t *head)
{
	int the_sum = 0;

	while (head != NULL)
	{
		the_sum += head->n;
		head = head->next;
	}
	return (the_sum);
}
