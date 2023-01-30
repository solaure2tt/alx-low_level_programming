#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>


/**
 * sum_listint - sum of elements in a list
 * Description: function that sum all the elements of a list_t list.
 * @head: link list to print
 * Return: number
 */
int sum_listint(listint_t *head)
{
	int count;
	listint_t *tmp = head;

	count = 0;
	while (tmp != NULL)
	{
		count = count + tmp->n;
		tmp = tmp->next;
	}
	return (count);
}
