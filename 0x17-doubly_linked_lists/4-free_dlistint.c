#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * free_dlistint - free a double link list
 * Description: function that frees adouble link list_t list.
 * @head: head of the link list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
