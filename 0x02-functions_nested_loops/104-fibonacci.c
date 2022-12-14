#include <stdio.h>

/**
 * main - entry
 * Description: program that prints the first 50 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	unsigned long i = 1, j = 2;
	int nb;
	unsigned long n = i + j;

	printf("%lu, ", i);
	printf("%lu, ", j);

	for (nb = 3; nb <= 98; nb++)
	{
		if (nb == 98)
			printf("%lu\n", n);
		else
			printf("%lu, ", n);
		i = j;
		j = n;
		n = i + j;
	}
	return (0);
}
