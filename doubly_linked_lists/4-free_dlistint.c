#include "lists.h"

/**
 * free_dlistint - frees the linked list.
 *
 * @head: starting point of the list.
 *
 * Description: Frees the doubly linked list with free.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	};
}
