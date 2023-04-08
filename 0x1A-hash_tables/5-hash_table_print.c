#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_print - print hashtable
 * Description: function that prints a hash table
 * @ht: hashtable
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long j, i;
	hash_node_t *current;

	i = 0;
	printf("{");
	if (ht != NULL)
	{
		j = 0;
		while (ht != NULL && i < ht->size)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (j == 0)
				{
					printf("'%s': '%s'", current->key, current->value);
					j++;
				}
				else
					printf(", '%s': '%s'", current->key, current->value);
				current = current->next;
			}
			i++;
		}
	}
	printf("}\n");
}
