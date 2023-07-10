#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - linear search algorithm(LSA)
 * Description: searches for a value in an array of integers using the LSA
 * @array: pointer to a first elemenets of arays of integers
 * @size: size of the array
 * @value: value to searcch in the array
 * Return: -1 or the index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = %d\n", i, *array);
		if (*array != value)
		{
			i++;
			array++;
		}
		else
			break;
	}
	if (i < size)
		return (i);
	else
		return (-1);
}
