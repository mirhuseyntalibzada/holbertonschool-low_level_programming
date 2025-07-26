#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a doubly linked list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}

	return (length);
}
