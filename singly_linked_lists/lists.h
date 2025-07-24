#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list list_t;

/**
 * struct list - singly linked list node structure
 * @str: pointer to a string (malloc'ed string)
 * @len: length of the string
 * @next: pointer to the next node in the list
 *
 * Description: A node structure for a singly linked list
 * used in various list operations such as printing or adding nodes.
 */
struct list
{
	char *str;
	int len;
	list_t *next;
};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t _strlen(const char *str);

#endif
