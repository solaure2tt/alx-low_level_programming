#include "main.h"

/**
 * reverse_array - reverse an array
 * Description: function that reverses the content of an array of integers
 * @a: parameter 1
 * @n: param 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
