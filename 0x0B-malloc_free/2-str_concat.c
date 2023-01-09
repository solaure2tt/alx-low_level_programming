#include "main.h"
#include <stdlib.h>
/**
 * length - size of string
 * Description: function that return the size of a string
 * @s: parameter 1
 * Return: integer
 */
int length(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * str_concat - entry
 * Description: function that  returns a pointer to a newly allocated space
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int size, i = 0;

	if (s1 == NULL && s2 == NULL)
	{
		res = "\0";
	}
	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size = length(s1) + length(s2);
	res = malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		res[i] = *s1;
		i++;
		s1++;
	}
	while (*s2 != '\0')
	{
		res[i] = *s2;
		i++;
		s2++;
	}
	return (res);
}
