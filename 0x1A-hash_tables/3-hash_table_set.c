#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key
 * Value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *ptr;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		ptr = ht->array[index];
		while (ptr->next != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
			{ free(ptr->value);
				ptr->value = strdup(value);
				if (ptr->value == NULL)
					return (0);
			} ptr = ptr->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
