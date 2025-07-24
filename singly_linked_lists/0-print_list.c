#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 *
 * Description: Iterates through a singly linked list and
 * prints the string in each node along with its length.
 * If a string is NULL, prints [0] (nil) instead.
 */

size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		h = h->next;
		length++;
	}

	return (length);
}
