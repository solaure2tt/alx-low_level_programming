#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - entry
 * Description: function that prints the chessboard.
 * @a: parameter
 * Return: array
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;

	i = 0;
	while ((a[i] != NULL) && (a[i][j] != '\0'))
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
