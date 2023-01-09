#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry
 * Description: function that returns a pointer to a 2D array
 * @width: parameter 1
 * @height: parameter 2
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	res = malloc(width * sizeof(int *));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		res[i] = malloc(height * sizeof(int));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			res[i][j] = 0;
		}
	}
	return (res);
}
