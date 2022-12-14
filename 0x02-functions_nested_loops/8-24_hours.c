#include "main.h"

/**
 * jack_bauer - journey of jack bauer
 * Description: function that prints every minute of the day of Jack Bauer
 * Return: minutes
 */
void jack_bauer(void)
{
	int i, j, k, l, max;

	for (i = 0; i < 3; i++)
	{
		if (i == 2)
			max = 4;
		else
			max = 10;
		for (j = 0; j < max; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
