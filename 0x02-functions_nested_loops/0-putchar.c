#include "_putchar.h"

/**
 * 0-putchar.c - writes _putchar in stdout
 * Description: writes _putchar in stdout buy usig functions
 * Return: 0
 */
int main(void)
{
	int a;

	a = _putchar('_');
	a = _putchar('p');
	a = _putchar('u');
	a = _putchar('t');
	a = _putchar('c');
	a = _putchar('h');
	a = _putchar('a');
	a = _putchar('r');
	a = _putchar('\n');
	if (a == 1)
		return (0);
	return (1);
}
