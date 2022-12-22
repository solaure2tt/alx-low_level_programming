#include "main.h"

/**
 * print_number - entry
 * Description: print an integer
 * @n: parameter
 * Result: number
 */
void print_number(int n)
{
	unsigned int res;

	if (n < 0)
	{
		_putchar('-');
		res = -n;
	}
	else
		res = n;
	if (res / 10)
		print_number(res / 10);
	_putchar(res % 10 + '0');
}
