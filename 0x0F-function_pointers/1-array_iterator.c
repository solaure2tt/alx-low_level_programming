#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - function on an array
 * Description: function that executes a function on each element of array
 * @array: parameter 1
 * @size: parameter 2
 * @action: parameter 3
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
