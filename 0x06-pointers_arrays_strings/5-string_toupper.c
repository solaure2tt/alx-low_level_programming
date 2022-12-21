#include "main.h"

/**
 * string_toupper - lower to upper character in a string
 * Description: function that changes all lowercase letters of a string to uppe
 * @str: parameter 1
 * Return: string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
