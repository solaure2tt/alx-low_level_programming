#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * _strlen - size of a string
 * Description: function that returns the length of a string
 * @s: parameter
 * Return: number
 */
int _strlen(char *s)
{
	int i, res;

	res = 0;
	i = 0;
	while (s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);
}

/**
 * _isdigit - function
 * Description: function that checks for digit
 * @c: parameter
 * Return: 1 if true 0 if false
 */

int _isdigit(char c)
{
	int r;

	r = 0;
	if (c >= '0' && c <= '9')
		r = 1;
	return (r);
}
/**
 * isnumber - test a number
 * Description: verifiy is a parameter is a numbe
 * @n: parameter 1
 * Return: number
 */
int isnumber(char *n)
{
	int r;

	r = 1;
	while (*n != '\0')
	{
		if (!(_isdigit(*n)))
			return (0);
		n++;
	}
	return (r);
}

/**
 * print - print a text
 * Description: print a string on screen
 * @s: parameter 1
 * Return: nothing
 */

void print(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * multiply - multiply numbers
 * Description: Multiply two strings
 * @res: parameter 1
 * @s1: parameter 2
 * @s2: parameter 3
 * Return: pointer
 */
void multiply(char *res, char *s1, char *s2)
{
	int length1, length2, i, j, tmp;
	int a, b, c;

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	for (i = length1 - 1; i >= 0; i--)
	{
		for (j = length2 - 1; j >= 0; j--)
		{
			a = s1[i] - '0';
			b = s2[j] - '0';
			c = res[i + j + 1] - '0';
			tmp = a * b + c;
			res[i + j + 1] = tmp % 10 + '0';
			c = res[i + j] - '0';
			res[i + j] = (c + tmp / 10) + '0';
		}
	}
	if (res[0] == '0')
		res++;
	print(res);
}

/**
 * main - entry
 * Description: program that multiplies two positive numbers.
 * @ac: parameter 1
 * @av: parameter 2
 * Return: number
 */
int main(int ac, char **av)
{
	char *res;
	int size;

	if (ac == 2)
	{
		print("Error\n");
		exit(98);
	}
	if (ac != 3)
	{
		print("Error\n");
		exit(98);
	}
	if (!isnumber(av[1]) || !isnumber(av[2]))
	{
		print("Error\n");
		exit(98);
	}
	if (atoi(av[1]) == 0 || atoi(av[2]) == 0)
		print("0\n");
	else
	{
		size = (_strlen(av[1]) + _strlen(av[2])) * sizeof(char);
		res = malloc(size + 1);
		if (res == NULL)
			return (0);
		memset(res, '0', size);
		multiply(res, av[1], av[2]);
		_putchar('\n');
	}
	return (1);
}
