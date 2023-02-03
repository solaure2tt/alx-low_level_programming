#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit- get a bit
 * Description: function that returns the value of a bit at a given index
 * @n: number to convert
 * @index: index of the bit to return
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mas;
	int mas_n;
	int b;

	mas =  1 << index;
	mas_n = n & mas;
	b = mas_n >> index;
	return (b);
}
