#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Alphabet
 * Description: print alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
