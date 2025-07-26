#include "hash_tables.h"

/**
 * update_value - Updates the value of an existing node.
 * @node: The node whose value is to be updated.
 * @value: The new value.
 *
 * Return: 1 on success, 0 on failure.
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * add_node - Creates a new node and adds it at the beginning of a list.
 * @ht: The hash table.
 * @key: The key for the new node.
 * @value: The value for the new node.
 * @index: The index in the array where the list is located.
 *
 * Return: 1 on success, 0 on failure.
 */
int add_node(hash_table_t *ht, const char *key,
	     const char *value, unsigned long int index)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: The hash table.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (update_value(current, value));
		current = current->next;
	}

	return (add_node(ht, key, value, index));
}

