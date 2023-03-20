#include "main.h"

/**
 * _isupper - function
 * Description: function that checks for uppercase character
 * @c: parameter
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	int r = 0;

	if (c >= 65 && c <= 90)
		r = 1;
	return (r);
}
