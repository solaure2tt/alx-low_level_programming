#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>


/**
 * listint_len - length of a list
 * Description: function that prints the length of a list_t list.
 * @h: link list to print
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
