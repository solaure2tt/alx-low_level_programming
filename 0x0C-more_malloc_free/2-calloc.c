#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * _calloc - calloc function
 * Description: function that allocates memory for an array, using malloc
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	memset(res, 0, nmemb * size);
	return (res);
}
