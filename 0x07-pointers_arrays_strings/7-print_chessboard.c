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
	int hascontent = 0;

	i = 0;
	while (a[i][j] != '\0')
	{
		hascontent = 0;
		j = 0;
		while (j < 8)
		{
			if (a[i][j] >= 'a' && a[i][j] <= 'z')
			{
				_putchar(a[i][j]);
				hascontent = 1;
			}
			if (a[i][j] >= 'A' && a[i][j] <= 'Z')
			{
				_putchar(a[i][j]);
				hascontent = 1;
			}
			if (a[i][j] == ' ')
			{
				_putchar(' ');
				hascontent = 1;
				break;
			}
			j++;
		}
		i++;
		if (hascontent == 1)
			_putchar('\n');
	}
}
