#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * clear_bit- set a bit
 * Description: function that set to 0 the value of a bit at a given index
 * @n: number to convert
 * @index: index of the bit to return
 * Return: bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = (*n) & ~(1 << index);
	return (*n);
}
