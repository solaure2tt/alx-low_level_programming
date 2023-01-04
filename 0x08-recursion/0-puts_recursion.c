#include "main.h"

/**
 * _puts_recursion - puts with recursion
 * Description: function that prints a string, followed by a new line
 * @s: parameter
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
