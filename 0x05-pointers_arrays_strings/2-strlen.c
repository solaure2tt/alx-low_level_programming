#include "main.h"

/**
 * _strlen - size of a string
 * Description: function that returns the length of a string
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
