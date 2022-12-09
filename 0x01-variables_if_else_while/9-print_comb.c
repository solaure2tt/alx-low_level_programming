#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible combinations of single-digit numbers
 * Description: prints by using only putchar
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
