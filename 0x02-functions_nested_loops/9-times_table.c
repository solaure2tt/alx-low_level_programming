#include "main.h"

/**
 * times_table - time table multiplication
 * Description: function that prints the 9 times table, starting with 0
 * Return: numbers
 */
void times_table(void)
{
	int i, j, res, first, last;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
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
			else
			{
				if (j == 0)
					_putchar('0' + res);
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + res);
				}
			}	
			if (j == 9)
				_putchar('\n');
			else
				_putchar(',');
		}
	}
}
