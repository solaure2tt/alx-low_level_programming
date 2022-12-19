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
 * rev_string - reverse a string
 * Description: function that reverse a string
 * @s: parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	int n = _strlen(s) - 1;
	int i, j;
	char tmp;

	j = n;
	for (i = 0; i <= n / 2; i++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		j--;
	}
}
