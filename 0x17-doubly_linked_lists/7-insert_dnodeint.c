#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_dnodeint_at_index - insert a node in a double link list
 * Description: function that insert a node at a given index in a list
 * @h: head of the link list
 * @idx: indexof the node to get
 * @n: integer to add
 * Return: the node add or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *tmp = *h;
	unsigned int i;

	if (tmp == NULL)
		return (NULL);
	i = 0;
	node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = (*h);
		node->prev = NULL;
		(*h) = node;
	}
	while (tmp != NULL && i != (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp != NULL)
	{
		node->next = tmp->next;
		tmp->next = node;
		node->prev = tmp;
		if (tmp->next != NULL)
			tmp->next->prev = node;
		return (node);
	}
	return (NULL);
}
