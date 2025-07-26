#include "hash_tables.h"

/**
 * update_node_value - Updates the value of an existing hash node.
 * @node: The node to update.
 * @value: The new value to assign.
 *
 * Return: 1 on success, 0 on failure.
 */
int update_node_value(hash_node_t *node, const char *value)
{
	char *value_copy;

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	free(node->value);
	node->value = value_copy;
	return (1);
}

/**
 * create_and_add_node - Creates a new hash node and adds it to the hash table.
 * @ht: The hash table.
 * @key: The key for the new node.
 * @value: The value for the new node.
 * @index: The index in the hash table's array where the node should be added.
 *
 * Return: 1 on success, 0 on failure.
 */
int create_and_add_node(hash_table_t *ht, const char *key,
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
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
			return (update_node_value(current_node, value));
		current_node = current_node->next;
	}

	return (create_and_add_node(ht, key, value, index));
}
