#include "main.h"

/**
 * print_triangle - function
 * Description: function that draws a triangle
 * @size: parameter
 * Return: character
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = 0; k < size - i; k++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
