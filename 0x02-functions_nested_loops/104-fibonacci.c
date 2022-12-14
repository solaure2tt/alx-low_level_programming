#include <stdio.h>

/**
 * main - entry
 * Description: program that prints the first 50 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	long int i = 1, j = 2;
	int nb;
	double n = (double)i + (double)j;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (nb = 3; nb <= 98; nb++)
	{
		if (nb == 98)
			printf("%llu\n", (long long)n);
		else
			printf("%llu, ", (long long)n);
		i = j;
		j = n;
		n = i + j;
	}
	return (0);
}
