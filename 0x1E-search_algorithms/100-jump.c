#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"
/**
 * min - minimum value
 * Description: minimum between two values
 * @x: first value
 * @y: second value
 * Return: the minimum
 */
size_t min(size_t x, size_t y)
{
	if (x > y)
		return (y);
	return (x);
}


/**
 * jump_search - jump search algorithm(JSA)
 * Description: searches for a value in an array of integers using the JSA
 * @array: pointer to a first elemenets of arays of integers
 * @size: size of the array
 * @value: value to searcch in the array
 * Return: -1 or the index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, k, pos;

	if (array == NULL)
		return (-1);
	i = 0;
	k = sqrt(size);
	if (array[min(k, size) - 1] < value)
	{
		while (array[min(k, size) - 1] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i = k;
			k = k + sqrt(size);
			if (i >= size)
				break;
		}
		pos = i - (long int)sqrt(size);
		printf("Value found between indexes [%ld] and [%ld]\n", pos, i);
	}
	else
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		printf("Value found between indexes [%ld] and [%ld]\n", i, k);
		pos = i;
	}
	while (array[pos] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		pos = pos + 1;
		if (pos == min(k, size))
			return (-1);
	}
	if (array[pos] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	else
		return (-1);
}
