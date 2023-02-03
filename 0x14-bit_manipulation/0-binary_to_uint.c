#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * _pow - pow of number
 * Description: calculate the power of a number
 * @x: number
 * @y: pow
 * Return: number
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	unsigned int res = 1;

	while (y > 0)
	{
		res = res * x;
		y--;
	}
	return (res);
}
/**
 * binary_to_uint - binary to number
 * Description: function that converts a binary number to an unsigned int
 * @b: number to convert
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, res = 0;
	const char *tmp = b;

	n = 0;
	if (b == NULL)
		return (0);
	while (*tmp != '\0')
	{
		if (*tmp != '0' && *tmp != '1')
			return (0);
		n++;
		tmp++;
	}
	tmp = b;
	n--;
	while (*tmp != '\0')
	{
		res = res + ((*tmp - '0') * _pow(2, n));
		n--;
		tmp++;

	}
	return (res);
}
