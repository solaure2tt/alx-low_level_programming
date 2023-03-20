#include "main.h"

/**
 * _strncpy - copy one string to another
 * Description: function that copies a string.
 * @dest: parameter 1
 * @src: param 2
 * @n: parameter 3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[j] = src[j];
			j++;
		}
		else
			break;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
