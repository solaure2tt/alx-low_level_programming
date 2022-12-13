#include "main.h"

/**
 * print_sign - print the sign of a number
 * Description: function that prints the sign of a number
 * @n: the number in entry
 * Return: 1 if positive, 0 if equal to 0 and -1 if negative
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
		result = 1;
	else if ( n == 0)
		result = 0;
	else
		result = -1;
	return (result);
}
