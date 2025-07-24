#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t linked list
 * @head: pointer to the head of the list
 *
 * Description: Frees each node and its string in the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
