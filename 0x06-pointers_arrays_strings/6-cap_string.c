#include "main.h"

/**
 * separators - find if it is a separator
 * Description: find if a caracter is a separator
 * @c: parameter
 * Return: 0 success, 1 fail
 */
int separators(char c)
{
	int res = 1;

	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';')
		res = 0;
	if (c == '.' || c == '!' || c == '?' || c == '"' || c == '(')
		res = 0;
	if (c == ')' || c == '{' || c == '}')
		res = 0;
	return (res);
}

/**
 * cap_string - capitilize words
 * Description: function that capitalizes all words of a string
 * @s: parameter
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] + 32;
		while (separators(s[i]) != 0 && s[i] != '\0')
			i++;
		i++;
		if ((s[i] != '\0') && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 32;
	}
	return (s);
}
