#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Numbers
 * Description: print number by using putchar
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	putchar('\n');
	return (0);
}
