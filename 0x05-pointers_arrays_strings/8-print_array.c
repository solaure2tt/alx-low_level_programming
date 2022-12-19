#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * Description: claculate the length of a string
 * @s: parameter
 * Return: number
 */
int _strlen(char *s)
{
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);
}

/**
 * print_array - prints n elements of an array
 * Description: function that prints n elements of an array of integers
 * @a: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
