#include "main.h"
#include <stddef.h>

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
 * _strstr - entry
 * Description: function that locates a substring.
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{

	char *p;
	char *res = NULL;
	char *n = needle;

	if (*needle == '\0')
		res = haystack;
	else
	{
		while ((haystack != NULL) && (needle != NULL) && (*haystack != '\0'))
		{
			if (*haystack == *needle)
			{
				p = haystack;
				haystack++;
				needle++;
				while ((*needle != '\0') && (*haystack == *needle))
				{
					needle++;
					haystack++;
				}
				if (*needle == '\0')
				{
					res = p;
					break;
				}
				else
					needle = n;
			}
			else
				haystack++;
		}
	}
	return (res);
}
