#include "main.h"

/**
 * print_last_digit - last digit
 * Description: function that prints the last digit of a number
 * @n: the number in entry
 * Return: number
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = n * -1;

	result = n % 10;
	_putchar('0' + result);
	return result;
}
