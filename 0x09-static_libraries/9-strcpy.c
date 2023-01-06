#include "main.h"
#include <stdio.h>

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
