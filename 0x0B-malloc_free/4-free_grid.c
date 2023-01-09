#include "main.h"
#include <stdlib.h>

/**
 * free_grid - entry
 * Description: function that free a pointer to a 2D array
 * @grid: parameter 1
 * @height: parameter 2
 * Return: array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height > 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}

}
