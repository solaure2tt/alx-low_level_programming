#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
/**
 * add_dnodeint - add on the head of a double link list
 * Description: function that adds a new node at the beginning of a list_t list
 * @head: head of the link list
 * @n: integer of the node to add
 * Return: list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (*head);
}
