#include "main.h"

/**
 * print_number - entry
 * Description: print an integer
 * @n: parameter
 * Result: number
 */
void print_number(int n)
{
	int rev;

	rev = 0;
	if (n < 0)
		_putchar('-');
	while (n / 10)
	{
		rev = rev * 10 + n % 10;
		n = n / 10;
	}
	if (rev < 0)
	{
		rev = -rev;
		n = -n;
	}
	_putchar(n + '0');
	while (rev)
	{
		_putchar(rev % 10 + '0');
		rev = rev / 10;
	}
}
