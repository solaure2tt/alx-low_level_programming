#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _strlen - size of a string
 * Description: function that returns the length of a string
 * @s: parameter
 * Return: number
 */

int _strlen(char *s)
{
	int i, res = 0;

	i = 0;
	while (s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);
}

/**
 * string_nconcat - entry
 * Description: function that concatenates two strings.
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: parameter 3
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res, *tmp;
	unsigned int i = 0;
	int size;

	if (s1 ==  NULL && s2 == NULL)
	{
		res = malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	if (s1 == NULL && s2 != NULL)
		size = n + 1;
	else
		size = _strlen(s1) + 1 + n;
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);
	tmp = res;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			*res = *s1;
			res++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while ((i < n) && (*s2 != '\0'))
		{
			*res = *s2;
			res++;
			s2++;
			i++;
		}
	}
	*res = '\0';
	return (tmp);
}
