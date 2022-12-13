#include "main.h"

/**
 * print_alphabet_x10 - print 10 time the alphabet
 * Description: prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
