#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - search integer
 * Description: function that searches for an integer
 * @array: parameter 1
 * @size: parameter 2
 * @cmp: parameter 3
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	i = 0;
	index = -1;
	while ((i < size) && (!cmp(array[i])))
	{
		i++;
	}
	if (i < size)
		index = i;
	return (index);
}
