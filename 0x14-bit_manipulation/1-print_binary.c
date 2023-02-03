#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - binary of a number
 * Description: function that prints the binary representation of a number.
 * @n: number to convert
 * Return: number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
