#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node after the given index.
 *
 * @h: start point of linked list.
 * @idx: index which is going to be used to add the new node.
 * @n: number for inserting to the node.
 *
 * Return: always head pointer.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i = 0;

	temp = *h;
	while (temp != NULL && i < idx)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	};

	newNode->n = n;
	newNode->prev = temp->prev;
	newNode->next = temp;
	newNode->prev->next = newNode;
	temp->prev = newNode;

	return (*h);
}
