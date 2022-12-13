#include "main.h"

/**
 * _islower - checks if the charater is lower 
 * Description: checks for lowercase character.
 * @c: character to check
 * Return: 1 if c is lowercase
 * 0 if not
 */
int _islower(int c)
{
	int r = 0;

	if ((c <= 'a') && (c >='z'))
		r = 1;
	return (r);
}
