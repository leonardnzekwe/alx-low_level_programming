#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(size);
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = NULL;

	return (table);
}
