#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: ht is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *ptr;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			head = ht->array[i];
			while (head != NULL)
			{
				ptr = head;
				head = head->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
			}
		}
		free(ht->array);
		free(ht);
	}
}
