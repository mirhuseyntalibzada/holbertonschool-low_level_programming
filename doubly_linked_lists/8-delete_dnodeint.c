#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index.
 *
 * @head: the start point of doubly linked list.
 * @index: the given index.
 *
 * Return: 1 if succeeded, -1 if not.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i = 0;

	curr = *head;
	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	};

	if (curr == NULL)
		return (-1);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;

	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	if (*head == curr)
		*head = curr->next;

	free(curr);

	return (1);
}
