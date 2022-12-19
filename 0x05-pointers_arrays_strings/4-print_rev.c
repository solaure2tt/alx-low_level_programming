#include "main.h"

/**
 * _strlen - length of string
 * Description: claculate the length of a string
 * @s: parameter
 * Return: number
 */
int _strlen(char *s)
{
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);
}

/**
 * print_rev - print reverse a string
 * Description: function that prints a string, in reverse, followed by a new li
 * @s: parameter
 * Return: nothing
 */
void print_rev(char *s)
{
	int n = _strlen(s) - 1;
	int i;

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
