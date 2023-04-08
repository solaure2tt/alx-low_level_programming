#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * hash_table_set - add an element in hashtable
 * Description: function that adds an element to the hash table
 * @ht: hashtable
 * @key: key of the element
 * @value: value of the element
 * Return: 1 if success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *currentNode;
	unsigned long int index;


	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *) malloc(sizeof(strlen(key) + 1));
	node->value = (char *) malloc(sizeof(strlen(value) + 1));
	strcpy(node->key, key);
	strcpy(node->value, value);
	index = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[index];
	if (currentNode == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
			free(node->key);
			free(node->value);
			free(node);
		}
		else
		{
			node->next = ht->array[index];
			ht->array[index] = node;
		}
	}
	return (1);
}
