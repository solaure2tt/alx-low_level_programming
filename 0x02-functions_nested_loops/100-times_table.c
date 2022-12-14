#include "main.h"

/**
 * print_times_table - time table multiplication
 * Description: function that prints the n times table, starting with 0
 * @n: number in entry
 * Return: numbers
 */
void print_times_table(int n)
{
	int i, x, res, first, last;

	if ((n >= 0) && (n <= 15))
	{		
	for (x = 0; x <= n; x++)
	{	
		for (i = 0; i <= n; i++)
		{
				res = i * x;
				if (res > 9)
				{
					first = res;
					while (first >= 10)
					{
						first = first / 10;
					}
					last = res % 10;
					_putchar(' ');
					_putchar('0' + first);
					_putchar('0' + last);
				}
				else if (i == 0)
					_putchar('0' + res);
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
				if (i == n)
					_putchar('\n');
				else
					_putchar(',');
			
		}
	}
}
}
