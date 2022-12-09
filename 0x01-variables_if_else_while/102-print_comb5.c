#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two two-digits
 * Description: The two digits must be different and Numbers must be separated
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			while (j < i)
				j++;
			for (k = 0; k < 10; k++)
			{
				l = 0;
				while ((k <= i) && (l <= j))
					l++;
				while (l < 10)
				{
					if ((i == 0) && (j == 0) && (k == 0) && (l == 0))
						l++;
					while ((k <= i) && (l < j))
						l++;
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if ((i == 9) && (j == 9) && (k == 8) && (l == 9))
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
