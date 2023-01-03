#include "main.h"

/**
 * _strchr - locate a character
 * Description: function that locates a character in a string
 * @s: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *_strchr(char *s, char c)
{

	while ((*s != '\0') && (*s != c))
	{
		s++;
	}
	return (s);
}
