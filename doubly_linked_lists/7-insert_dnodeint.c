#include "lists.h"

/**
 * traverse_dnodeint - Traverse to node before the insertion index
 * @head: pointer to the head of the list
 * @idx: index at which to insert the new node
 *
 * Return: pointer to node before insertion point, or NULL if index is too big
 */
dlistint_t *traverse_dnodeint(dlistint_t *head, unsigned int idx)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index at which to insert new node
 * @n: data value for new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;

	if (h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	temp = traverse_dnodeint(*h, idx);
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = temp->next;
	newNode->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = newNode;

	temp->next = newNode;

	return (newNode);
}

