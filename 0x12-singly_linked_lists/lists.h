#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - MK - hadi, singly linked list ra2isiya
 * @str: string of malcom
 * @len: length dyial string
 * @next: b7ad next tanppointiw n next node
 *
 * Description: la structure diyal singly linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /*LISTS_H*/
