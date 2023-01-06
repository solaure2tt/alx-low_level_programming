#include "main.h"

/**
 * _strcmp - compare two strings
 * Description: function that compares two strings
 * @s1: parameter 1
 * @s2: param 2
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		res = 0;
	else
		res = *(unsigned char *)s1 - *(unsigned char *)s2;
	return (res);
}
