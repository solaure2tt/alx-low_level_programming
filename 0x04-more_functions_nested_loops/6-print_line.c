#include "main.h"

/**
 * print_line - function
 * Description: function that prints _ n times
 * @n: parameter
 * Return: character
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
