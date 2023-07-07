#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: ht is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int separator = 0;
	hash_node_t *ptr;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				if (separator != 0)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				separator = 1;
				ptr = ptr->next;
			}
		}
		printf("}\n");
	}
}
