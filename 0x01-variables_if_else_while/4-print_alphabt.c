#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - alphabet
 * Description: print alphabet without e and q
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'e') && (c != 'q'))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
