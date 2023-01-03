#include "main.h"

/**
 * _memset - fills bytes
 * Description: function that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (p);
}
