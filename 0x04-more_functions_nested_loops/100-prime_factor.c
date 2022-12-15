#include <stdio.h>

/**
 * main - entry
 * Description:  program that finds and prints the largest prime factor
 * Return: number
 */
int main(void)
{
	long int n, div, res, max;

	n = 612852475143;
	div = 2;
	res = 0;
	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			max = n;
			n = n / div;
			if (n == 1)
			{
				res = max;
				printf("%lu \n", res);
				break;
			}
		}
	}
	return (0);
}
