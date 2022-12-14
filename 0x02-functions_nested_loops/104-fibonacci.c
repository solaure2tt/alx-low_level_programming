#include <stdio.h>

/**
 * main - entry
 * Description: program that prints the first 50 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	double i = 1, j = 2;
	int nb;
	double n = (double)i + (double)j;

	printf("%.0lf, ", i);
	printf("%.0lf, ", j);

	for (nb = 3; nb <= 98; nb++)
	{
		if (nb == 98)
			printf("%.0lf\n", n);
		else
			printf("%.0lf, ", n);
		i = j;
		j = n;
		n = i + j;
	}
	return (0);
}
