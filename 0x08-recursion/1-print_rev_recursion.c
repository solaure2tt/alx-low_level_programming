#include "main.h"

/**
 * rev -  print reverse
 * Description: print a reverse string
 * @s: parameter 1
 * Return: nothing
 */
void rev(char *s)
{
	if (*s != '\0')
	{
		s++;
		rev(s);
		_putchar(*s);
	}
}
/**
 * _print_rev_recursion - puts reverse with recursion
 * Description: function that prints a string in reverse, followed by a new
 * @s: parameter
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	rev(s);
	_putchar('\n');
}
