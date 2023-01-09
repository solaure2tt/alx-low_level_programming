#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry
 * Description: function that creates an array of chars
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		res[i] = c;
	return (res);
}
