#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * get_dnodeint_at_index- get a node in a double link list
 * Description: function that get a given node in a list_t list
 * @head: head of the link list
 * @index: indexof the node to get
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	dlistint_t *tmp = head;
	unsigned int i;

	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (tmp != NULL && i != index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp != NULL)
		node = tmp;
	return (node);
}
