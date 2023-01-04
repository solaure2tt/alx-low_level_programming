#include "main.h"

/**
 * _sqrt - square root
 * Description: calculate teh square root of a number
 * @x: parameter 1
 * @y: parameter 2
 */
int _sqrt(int x, int y)
{
	if (y == 1)
		return (-1);
	if (y * y == x)
		return (y);
	return (_sqrt(x, y - 1));
}
/**
 * _sqrt_recursion - square recursion
 * Description: function that returns the natural square root of a number
 * @n: parameter 1
 * Return: number
 */
int _sqrt_recursion(int n)
{

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, n / 2));
}
