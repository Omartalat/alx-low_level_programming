#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table
 *
 * Made by Dr_Omar
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i] != NULL)
        {
            hash_node_t *node = ht->array[i];
            while (node != NULL)
            {
                hash_node_t *tmp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = tmp;
            }
        }
    }
    free(ht->array);
    free(ht);
}
