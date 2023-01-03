#include "main.h"

/**
 * searchchar - search a character
 * Description: search a chararter in a set of chararcter
 * @s: parameter 1
 * @c: prameter 2
 * Return: number
 */
int searchchar(char *s, char c)
{
	int res = 0;
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
		{
			res = 1;
			break;
		}
		p++;

	}
	return (res);
}
/**
 * _strpbrk - entry
 * Description: function that searches a string for any of a set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{

	char *p;

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
