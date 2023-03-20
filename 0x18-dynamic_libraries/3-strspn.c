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
 * _strspn - entry
 * Description: function that gets the length of a prefix substring
 * @s: parameter 1
 * @accept: parameter 2
 * Return: number
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;

	while ((*s != '\0') && (res == 0))
	{
		while (searchchar(accept, *s) && (*s != ' '))
		{
			res++;
			s++;
		}
		if (res == 0)
		{
			while ((*s != '\0') && (*s != ' '))
				s++;
			if (*s == ' ')
				s++;
		}
		else
			break;
	}
	return (res);
}
