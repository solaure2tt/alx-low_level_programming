#include "main.h"

/**
 * print_square - function
 * Description: function that draws a diagonal line
 * @size: parameter
 * Return: character
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
