#include "main.h"

/**
 * printR - time table multiplication
 * Description: function that prints the n times table, starting with 0
 * @res: number in entry
 * @i: second param
 * Return: numbers
 *
 */
void printR(int res, int i)
{
	int first, last, middle;

				if (res > 9)
				{
					_putchar(' ');
					first = res / 10;
					last = res % 10;
					if (res <= 99)
					{
						_putchar(' ');
						_putchar('0' + first);
						_putchar('0' + last);
					}
					else
					{
						middle = first % 10;
						first = first / 10;
						_putchar('0' + first);
						_putchar('0' + middle);
						_putchar('0' + last);
					}
				}
				else if (i == 0)
					_putchar('0' + res);
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}

}


/**
 * print_times_table - time table multiplication
 * Description: nnn
 * @n: param
 * Return: no
 */
void print_times_table(int n)
{
	int i, x, res;

	if ((n >= 0) && (n <= 15))
	{		
		for (x = 0; x <= n; x++)
		{
			for (i = 0; i <= n; i++)
			{
				res = i * x;
				printR(res, i);
				if (i == n)
					_putchar('\n');
				else
					_putchar(',');
			
			}
		}
}
}
