#include <stdio.h>

/*
 * main - entry
 * Description:  program that computes and prints the sum of all the multiple
 * Return: number
 */
int main(void)
{
	int res = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			res = res + i;
	}
	printf("%d\n", res);
	return (res);
}
