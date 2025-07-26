#include "lists.h"

/**
 * sum_dlistint - calculates the sum of integers inside of nodes in doubly
 * linked list.
 *
 * @head: the start point of doubly linked list.
 *
 * Return: sum of all numbers.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
