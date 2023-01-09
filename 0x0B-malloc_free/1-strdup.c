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
 * _strdup - entry
 * Description: function that  returns a pointer to a newly allocated space
 * @str: parameter 1
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *res;
	int i;

	if (str == NULL)
		return (NULL);
	res = malloc(sizeof(char) * length(str) + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < length(str); i++)
		res[i] = str[i];
	return (res);
}
