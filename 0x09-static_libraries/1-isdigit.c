#include "main.h"

/**
 * _isdigit - function
 * Description: function that checks for digit
 * @c: parameter
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	int r = 0;

	if (c >= 48 && c <= 57)
		r = 1;
	return (r);
}
