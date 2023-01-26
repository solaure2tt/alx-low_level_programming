#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * free_list - free a list
 * Description: function that frees a list_t list.
 * @head: head of the link list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp = head;

	while (head != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
