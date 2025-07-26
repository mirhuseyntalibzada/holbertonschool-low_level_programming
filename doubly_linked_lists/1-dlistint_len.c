#include "lists.h"

/**
 * dlistint_len - Returns the number of elements.
 *
 * @h: Node.
 *
 * Return: size_t type of length.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}
