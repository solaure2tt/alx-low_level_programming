#include <stdio.h>

/**
 * main - entry
 * Description: program that finds and prints the sum of the even-valued terms
 * Return: 0 success
 */
int main(void)
{
	long int i = 1, j =2;
	long int n = i + j;
	long int res = 2;

	while (n < 4000000)
	{
		if ((n % 2) == 0)
			res = res + n;
		i = j;
		j = n;
		n = i + j;
	}
	printf("%lu\n", res);
	return (0);
}
