#include "main.h"

/**
 * _strlen_recursion - strlen with recursion
 * Description: function that returns the length of a string
 * @s: parameter
 * Return: number
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (0);
	s++;
	length++;
	return (length + _strlen_recursion(s));
}
