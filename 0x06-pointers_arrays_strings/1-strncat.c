#include "main.h"

/**
 * _strncat: concat two string
 * Description: function that concatenates two strings only n character
 * @dest: parameter 1
 * @src: param 2
 * @n: parameter 3
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		else
			break;
	}
	return (dest);
}
