#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate a character
 * Description: function that locates a character in a string
 * @s: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while ((*s != '\0') && (*s != c))
	{
		s++;
	}
	if (*s == c)
		p = s;
	return (p);
}
