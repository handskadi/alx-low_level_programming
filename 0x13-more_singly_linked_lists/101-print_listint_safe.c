#include "lists.h"

/**
 * print_listint_safe - adagh i printa likedlist sucerisment
 * @head: hadiyahiya la list
 * Return: ch7al mn nod f lista 
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
