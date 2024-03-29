#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit- set a bit
 * Description: function that set the value of a bit at a given index
 * @n: number to convert
 * @index: index of the bit to return
 * Return: 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	*n = (*n) | (1 << index);
	return (1);
}
