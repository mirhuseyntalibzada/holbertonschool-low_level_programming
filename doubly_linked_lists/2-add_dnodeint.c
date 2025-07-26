#include "lists.h"

/**
 * add_dnodeint - add the node to the start of the doubly linked list.
 *
 * @head: the pointer which shows the start of the list.
 * @n: number that will be inserted to the node.
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
