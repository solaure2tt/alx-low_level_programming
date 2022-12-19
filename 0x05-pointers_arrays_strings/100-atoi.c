#include "main.h"

/**
 * _atoi - convert a string to a number
 * Description: function that convert a string to an integer
 * @s: parameter 1
 * Return: pointer
 */
int _atoi(char *s)
{
	int i = 0;
	int res = 0;
	char bef;
	int countneg = 0;

	if (s[i] != '\0')
	{
		bef = s[i];
		while (!(bef >= '0' && bef <= '9'))
		{
			if (s[i] == '-')
				countneg++;
			if (s[i + 1] != '\0')
			{
				i++;
				bef = s[i];
			}
			else
				break;

		}
		while (s[i] != '\0')
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				res = res * 10 + s[i] - '0';
			}
			else
			{
				break;
			}
			i++;
		}
		if (countneg % 2 != 0)
			res = (-1) * res;
	}
	return (res);
}
