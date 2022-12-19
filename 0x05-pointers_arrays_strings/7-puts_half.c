#include "main.h"
#include <stddef.h>

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
 * puts_half - prints a half of a string
 * Description: function that prints half of a string
 * @str: parameter
 * Return: nothing
 */
void puts_half(char *str)
{
	int n = _strlen(str);
	int i, j;

	j = n / 2;
	if (n % 2 != 0)
		j = ((n - 1) / 2) + 1;
	for (i = j; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
