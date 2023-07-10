#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * printtabsearch - print the sub tab
 * Description: print the sub tab wher the value is searched
 * @array: pointer to a first elemenets of arays of integers
 * @first: first index of the sub array
 * @end: last index of the sub array
 * Return: nothing
 */
void printtabsearch(int *array, int first, int end)
{
	int i;

	printf("Searching in array:");
	for (i = first; i <= end; i++)
	{
		printf(" %d", array[i]);
		if (i != end)
			printf(",");
	}
	printf("\n");
}

/**
 * binary - binary search recursion
 * Description: search for a value in an array
 * @array: pointer to a first elemenets of arays of integers
 * @first: first index of the sub array
 * @end: last index of the sub array
 * @value: value to searcch in the array
 * Return: -1 or the index of value
 */
int binary(int *array, int first, int end, int value)
{
	int m;

	while (first <= end)
	{
		printtabsearch(array, first, end);
		m = first + (end - first) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			first = m + 1;
		else
			end = m - 1;
	}
	return (-1);
}
/**
 * binary_search -  Binary search algorithm)(BSA)
 * Description: searches for a value in an array of integers using the BSA
 * @array: pointer to a first elemenets of arays of integers
 * @size: size of the array
 * @value: value to searcch in the array
 * Return: -1 or the index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first, end, res;

	if (array == NULL)
		return (-1);
	first = 0;
	end = size - 1;
	res = binary(array, (int)first, (int)end, value);
	return (res);
}
