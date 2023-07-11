#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm(ISA)
 * Description: searches for a value in an array of integers using the ISA
 * @array: pointer to a first elemenets of arays of integers
 * @size: size of the array
 * @value: value to searcch in the array
 * Return: -1 or the index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, mid, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		pos = (size_t)(low + mid);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
		{
			return (mid);
		}
	}
	if (value == array[low])
		return (low);
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
}
