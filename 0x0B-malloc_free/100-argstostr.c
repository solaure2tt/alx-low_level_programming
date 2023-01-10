#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * length - size of string
 * Description: function that return the size of a string
 * @s: parameter 1
 * Return: integer
 */
int length(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * argstostr - entry
 * Description: function that  concatenates all the arguments of prog
 * @ac: parameter 1
 * @av: parameter 2
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *res;
	int i, sav, j, k, size = 0;

	if (ac == 0 && av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		size += length(av[i]) + 1;
	}
	res = malloc(size * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		sav = length(av[i]);
		j = 0;
		while (j < sav)
		{
			res[k] = av[i][j];
			k++;
			j++;
		}
		res[k] = '\n';
		k++;
	}
	return (res);
}
