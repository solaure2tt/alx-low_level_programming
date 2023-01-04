#include "main.h"

/**
 * _pow_recursion - pow with recursion
 * Description: function that returns the value of x raised to the power of y
 * @x: parameter 1
 * @y: parameter 2
 * Return: number
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
			return (x * _pow_recursion(x, y - 1));
	}
}
