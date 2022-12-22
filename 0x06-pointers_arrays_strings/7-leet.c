#include "main.h"

/**
 * leet - encode a string
 * Description: function that encodes a string into 1337
 * @s: parameter
 * Return: string
 */
char *leet(char *s)
{
	char letters[] = {'e', 'E', 'a', 'A', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[] = {'3', '3', '4', '4', '0', '0', '7', '7', '1', '1'};
	int j, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == letters[j])
				s[i] = code[j];
		}
		i++;
	}
	return (s);
}
