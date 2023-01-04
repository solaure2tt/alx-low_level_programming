#include "main.h"

/**
 * prime - prime number
 * Description: verify if a number is prime
 * @x: parameter 1
 * @i: parameter 2
 * Return: 0 or 1
 */
int prime(int x, int i)
{
	if (x == i)
		return (1);
	else if (x % i == 0)
		return (0);
	else
		return (prime(x, i + 1));
}
/**
 * is_prime_number - prime number recursion
 * Description: function that returns 1 if the input integer is a prime number
 * @n: parameter 1
 * Return: number
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (prime(n, i));
}
