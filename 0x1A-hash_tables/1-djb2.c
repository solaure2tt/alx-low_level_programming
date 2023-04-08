#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * hash_djb2 - djb2 algorithm
 * Description: hash function implementing the djb2 algorithm
 * @str: key of the hashtable
 * Return: hash value index in the hashtable
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
	
	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
