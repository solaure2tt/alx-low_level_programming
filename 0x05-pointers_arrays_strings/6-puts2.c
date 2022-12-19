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
 * puts2 - prints other character
 * Description: function that prints every other character of a string
 * @str: parameter
 * Return: nothing
 */
void puts2(char *str)
{
	int n = _strlen(str) - 1;
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
