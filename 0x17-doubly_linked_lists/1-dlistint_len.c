#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * dlistint_len - count elements of a double link list
 * Description: count all the elements of a double link list
 * @h: double link list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
