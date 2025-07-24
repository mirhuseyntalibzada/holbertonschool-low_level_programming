#include "lists.h"

/**
 * _strlen - finds the length of the string
 * @str: pointer to the string value
 *
 * Return: length
 */
size_t _strlen(const char *str)
{
	size_t length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	};

	return (length);
}

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to store in the new node (must be duplicated)
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	char *dup;

	if (str == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = dup;
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
	}

	return (newNode);
}
