#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_delete - delete a hashtable
 * Description: function that deletes a hash table
 * @ht: hashtable
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_table_t *h = ht;
	hash_node_t *tmp, *current;

	if (h != NULL)
	{
		while (i < h->size)
		{
			if (h->array[i] != NULL)
			{
				current = h->array[i];
				while (current)
				{
					tmp = current->next;
					free(current->key);
					free(current->value);
					free(current);
					current = tmp;
				}
			}
			i++;
		}
		free(h->array);
		free(h);
	}
}
