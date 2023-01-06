#include <stdio.h>
#include <stdlib.h>
/**
 * isnumber - verify a number
 * Description: verify if it is a number
 * @n: paremeter 1
 * Return: 1 or 0
 */
int isnumber(char *n)
{
	int result = 1;

	while (*n != '\0')
	{
		if ((*n >= '0') && (*n <= '9'))
			n++;
		else
		{
			result = 0;
			break;
		}
	}
	return (result);
}
/**
 * main - entry
 * Description: program that prints its name, followed by a new line
 * @argc: prameter 1
 * @argv: parameter 2
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int i, test = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]))
			res = res + atoi(argv[i]);
		else
		{
			test = 1;
			break;
		}
	}
	if (test == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", res);
		return (0);
	}
}
