#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>


/**
 * sum_dlistint - sum of elements in a double link list
 * Description: function that sum all the elements of a list_t list.
 * @head: link list to print
 * Return: number
 */
int sum_dlistint(dlistint_t *head)
{
	int count;
	dlistint_t *tmp = head;

	count = 0;
	while (tmp != NULL)
	{
		count = count + tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
