#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonals
 * Description: function that prints the sum of the two diagonals of a square
 * @a: parameter 1
 * @size: parameter 2
 * Return: number
 */
void print_diagsums(int *a, int size)
{
	int number2, j, i = 0;
	long int sum1, sum2 = 0;

	sum1 = 0;
	for (i = 0; i < size * size; i = i + size + 1)
	{
		number2 = a[i];
		sum1 += (long int)number2;
	}
	printf("%ld, ", sum1);
	for (j = size - 1; j < (size * size) - 1; j = j + size - 1)
	{
		number2 = a[j];
		sum2 += (long int)number2;
	}
	printf("%ld\n", sum2);
}
