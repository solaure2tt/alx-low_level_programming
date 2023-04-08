#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * hash_table_create - creaton of the hashtable
 * Description: function that creates a hash table.
 * @size: size of the hashtable
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	unsigned long int i;

	h = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);
	h->size = size;
	h->array = (hash_node_t **) calloc(h->size, sizeof(hash_node_t *));
	for (i = 0; i < size; i++)
		h->array[i] = NULL;
	return (h);
}
