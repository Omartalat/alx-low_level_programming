#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	node = NULL;
	tmp = NULL;
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				node = ht->array[i];
				tmp = node;
			}
			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
