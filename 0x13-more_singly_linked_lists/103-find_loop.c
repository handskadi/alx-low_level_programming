#include "lists.h"

/**
 * find_listint_loop - nl9aw la list li kiyna f loop
 * @head: pnter l head dyal list.
 *
 * Return: ila makynach list returni null
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *c, *q;

	if (head == NULL || head->next == NULL)
		return (NULL);

	c = head->next;
	q = (head->next)->next;

	while (q)
	{
		if (c == q)
		{
			c = head;

			while (c != q)
			{
				c = c->next;
				q = q->next;
			}

			return (c);
		}

		c = c->next;
		q = (q->next)->next;
	}

	return (NULL);
}
