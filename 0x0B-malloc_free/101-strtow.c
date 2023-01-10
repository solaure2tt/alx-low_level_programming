#include "main.h"
#include <stdlib.h>

/**
 * numberofwords - function
 * Description: count the number of words in a string
 * @s: parameter 1
 * Return: number
 */
int numberofwords(char *s)
{
	int count = 0;
	char *ch;

	ch = s;
	while (*ch != '\0')
	{
		if (*ch == ' ' && *(ch + 1) != ' ' && *(ch + 1) != '\0')
		{
			count++;
		}
		ch++;
	}
	return (count);
}

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
 * _strcpy - copy a string to anoyher string
 * Description: function that copies the string
 * @dest: parameter 1
 * @src: parameter 2
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int siz = _strlen(src);

	for (i = 0; i <= siz; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * strtow - entry
 * Description: function that splits a string into words
 * @str: parameter 1
 * Return: pointer
 */
char **strtow(char *str)
{
	int i, sizewords = 0;
	char **res;
	char *ch;

	if (str == NULL || numberofwords(str) == 0)
		return (NULL);
	res = malloc((numberofwords(str + 1)) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	ch = malloc(100 * sizeof(char));
	while (*str != '\0')
	{
		while (*str != ' ')
		{
			if (*str == '\0')
				break;
			ch[sizewords++] = *str++;
		}
		if (sizewords > 0)
		{
			ch[sizewords] = '\0';
			res[i] = malloc(sizewords * sizeof(char));
			if (res[i] == NULL)
				return (NULL);
			_strcpy(res[i], ch);
			free(ch);
			ch = malloc(100 * sizeof(char));
			i++;
			sizewords = 0;
		}
		else
			str++;
	}
	free(ch);
	res[i] = NULL;
	return (res);
}
