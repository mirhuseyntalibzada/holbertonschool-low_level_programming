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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: string to store in the new node (must be duplicated)
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->next = *head;
	temp->len = _strlen(str);
	temp->str = dup;
	*head = temp;

	return (temp);
}
