#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - entry
 * Description: function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{

	char *p = NULL;

	while (*s != '\0')
	{
		if (searchchar(accept, *s))
		{
			p = s;
			break;
		}
		s++;
	}
	return (p);
}
