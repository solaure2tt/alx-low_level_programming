#include "main.h"

/**
 * print_diagonal - function
 * Description: function that draws a diagonal line
 * @n: parameter
 * Return: character
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j != i)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
