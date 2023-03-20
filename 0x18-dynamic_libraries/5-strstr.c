#include "main.h"
#include <stddef.h>


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
