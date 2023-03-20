#include "main.h"
#include <stdio.h>
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
