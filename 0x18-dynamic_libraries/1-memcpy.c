#include "main.h"

/**
 * _memcpy - copy bytes
 * Description: function that copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (p);
}
