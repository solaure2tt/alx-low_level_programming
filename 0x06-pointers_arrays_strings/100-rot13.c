#include "main.h"

/**
 * rot13 - encode a string with rot13
 * Description: function that encodes a string into rot13
 * @s: parameter
 * Return: string
 */
char *rot13(char *s)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = code[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
