#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_get - retrieve the value of a key
 * Description: function that retrieves a value associated with a key.
 * @ht: hashtable
 * @key: key to search
 * Return: key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *res = NULL;
	hash_node_t *current;
	unsigned long int index;

	if (key == NULL)
		return (res);
	index = key_index((unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (res);
	while (current != NULL && (strcmp(current->key, key) != 0))
		current = current->next;
	if (current == NULL)
		return (res);
	return (current->value);
}
