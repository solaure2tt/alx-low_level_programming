#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * array_range - array with range
 * Description: function that creates an array of integers.
 * @min: parameter 1
 * @max: parameter 2
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *res = NULL;
	int size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	res = malloc(size * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(res + i) = min + i;
	return (res);
}
