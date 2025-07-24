#include "lists.h"

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
	temp->len = strlen(str);
	temp->str = dup;
	*head = temp;

	return (temp);
}
