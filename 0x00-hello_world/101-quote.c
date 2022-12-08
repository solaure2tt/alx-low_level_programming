#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print on the screen
 * Description: print a text without use printf or puts
 * Return: 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i, s;

	s = strlen(str);
	for(i = 0; i < s; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (1);
}
