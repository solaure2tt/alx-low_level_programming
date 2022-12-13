#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print number to 98
 * Description: function that prints all natural numbers from n to 98
 * @n: the number in entry
 * Return: list of natural number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while(n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
