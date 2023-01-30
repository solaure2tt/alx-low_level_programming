#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * pop_listint - delete on the head of a list
 * Description: function that adds a new node at the beginning of a list_t list
 * @head: head of the link list
 * Return: head node n
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int x;

	if (*head == NULL)
		return (0);
	x = node->n;
	(*head) = (*head)->next;
	free(node);
	return (x);
}
