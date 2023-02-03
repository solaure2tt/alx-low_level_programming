#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * flip_bits- count bit
 * Description: number of bits you would need to flip number to another
 * @n: first number
 * @m: next number
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c;
	int l1;
	int l2 = 0;

	c = 0;
	l1 = 0;
	while ((n > 0) || (m > 0))
	{
		l1 = n & 1;
		l2 = m & 1;
		if (l1 != l2)
			c++;
		n = n >> 1;
		m = m >> 1;
	}
	return (c);
}
