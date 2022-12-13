#include "main.h"

/**
 * _abs - absolute value
 * Description: function that computes the absolute value of an integer
 * @n: number in entry
 * Return: the absolut value of n
 */
int _abs(int n)
{
	int result;

	if (n < 0)
		result = result * -1;
	else
		result = n;
	return (result);
}
