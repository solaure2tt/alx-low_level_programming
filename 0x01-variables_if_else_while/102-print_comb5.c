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
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != 0)
				{
					while (k <= j)
						k++;
				}
				l = 0;
				while ((k <= i) && (l <= j))
					l++;
				while (l < 10)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
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
