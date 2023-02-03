#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - binary to number
 * Description: function that converts a binary number to an unsigned int
 * @b: number to convert
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, res = 0;

	i = 0;
	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		res <<= 1;
		res += b[i] - '0';
		i++;
	}
	return (res);
}
