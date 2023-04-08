#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * key_index - index of a key
 * Description: function that gives you the index of a key
 * @key: key to insert in the hashtable
 * @size: size of the array of the hashtable
 * Return: a index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;

	res = hash_djb2(key) % size;
	return (res);
}
