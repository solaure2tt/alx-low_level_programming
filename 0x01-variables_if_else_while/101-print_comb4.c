#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible different combinations of three digits
 * Description: The three digits must be different and Numbers must be separated
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			k = j + 1;
         		while (k < 10)
	        	{
	        		putchar('0' + i);
	         		putchar('0' + j);
				putchar('0' + k);
		        	if ((i == 7) && (j == 8) && (k == 9))
		        		break;
		        	putchar(',');
		        	putchar(' ');
		        	k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
