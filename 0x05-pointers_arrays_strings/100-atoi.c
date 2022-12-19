#include "main.h"

/**
 * _atoi - convert a string to a number
 * Description: function that convert a string to an integer
 * @s: parameter 1
 * Return: pointer
 */
int _atoi(char *s)
{
	int j, i = 0;
	int res = 0;
	char bef;

	if (s[i] != '\0')
	{
		bef = s[i];
		j = i;
		while (!(bef >= '0' && bef <= '9'))
		{
			if (s[i + 1] != '\0')
			{
				j = i;
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
		if (s[j] == '-')
			res = (-1) * res;
	}
	return (res);
}
