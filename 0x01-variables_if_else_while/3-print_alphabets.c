#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - alphabet
 * Description: print the alphabet in lowercase and upper case
 * Return: 0
 */

int main(void)
{
	char c = 'a';
	char upper = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
