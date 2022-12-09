#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print number in base 16
 * Description: print the digits oh hexadecimal
 * Return: 0
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
