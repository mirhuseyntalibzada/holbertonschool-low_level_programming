#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct dlistint dlistint_t;

/**
 * struct dlistint - Doubly linked list node structure
 * @str: Pointer to a string stored in the node
 * @next: Pointer to the next node in the list
 * @prev: Pointer to the previous node in the list
 *
 * Description: Node structure for a doubly linked list
 * used in various string-related operations.
 */
struct dlistint
{
	int n;
	dlistint_t *next;
	dlistint_t *prev;
};

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *traverse_dnodeint(dlistint_t *h, unsigned int idx);

#endif
