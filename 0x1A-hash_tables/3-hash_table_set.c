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
	hash_node_t *new_node, *head, *ptr;
	char *value_dup, *key_dup;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	ptr = ht->array[index];
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{ free(ptr->value);
			ptr->value = value_dup;
			return (1);
		} ptr = ptr->next;
	}
	key_dup = strdup(key);
	if (key_dup == NULL)
	{ free(value_dup);
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{ free(key_dup);
		free(value_dup);
		return (0);
	}
	new_node->key = key_dup;
	new_node->value = value_dup;
	new_node->next = NULL;
	if (head == NULL)
		head = new_node;
	else
		ptr->next = new_node;
	return (1);
}
