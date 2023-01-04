#include "main.h"

/**
 * length - length of string
 * Description: calculate the lenth of string
 * @s: parameter 1
 * Return: number
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (length(s) + 1);
}
/**
 * rev -  print reverse
 * Description: print a reverse string
 * @s: parameter 1
 * @size: parameter 2
 * Return: nothing
 */
void rev(char *s, int size)
{
	if (size > -1)
	{
		_putchar(s[size]);
		rev(s, size - 1);
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
	int size = length(s);

	rev(s, size - 1);
}
