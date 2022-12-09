#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of two digits
 * Description: The two digits must be different and Numbers must be separated
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);
			if ((i == 8) && (j == 9))
				break;
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}
