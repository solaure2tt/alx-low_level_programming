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
 * palindrome -  palindrome
 * Description: palindrome string
 * @s: parameter 1
 * @init: parameter 2
 * @size: parameter 3
 * Return: nothing
 */
int palindrome(char *s, int init, int size)
{
	if (size <= init)
		return (1);
	if (s[init] == s[size])
		return (palindrome(s, init + 1, size - 1));
	return (0);
}
/**
 * is_palindrome - palindrome with recursion
 * Description: function that returns 1 if a string is a palindrome and 0 if n
 * @s: parameter
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int size = length(s);

	if (size == 0)
		return (0);
	return (palindrome(s, 0, size - 1));
}
