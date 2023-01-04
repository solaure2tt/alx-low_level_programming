#include "main.h"

/**
 * _print_rev_recursion - puts reverse with recursion
 * Description: function that prints a string in reverse, followed by a new
 * @s: parameter
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
