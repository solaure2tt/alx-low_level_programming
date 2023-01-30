#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * free_listint - free a list
 * Description: function that frees a list_t list.
 * @head: head of the link list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
