#include "main.h"

/**
 * more_numbers - function
 * Description: function that prints 10 times the numbers, from 0 to 14
 * Return: numbers
 */
void more_numbers(void)
{
	int i, first, last, count;

	count = 1;
	while (count <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			first = i;
			if (i >= 10)
			{
				first = 1;
				last = i % 10;
			}
			_putchar('0' + first);
			if (i >= 10)
				_putchar('0' + last);
		}
		_putchar('\n');
		count++;
	}
}
