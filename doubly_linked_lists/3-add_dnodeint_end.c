#include "lists.h"


/**
 * add_dnodeint_end - add node the the end of the doubly linked list.
 *
 * @head: the start point of linked list.
 * @n: the number that will be held.
 *
 * Return: always return the head pointer.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;

	return (*head);
}
