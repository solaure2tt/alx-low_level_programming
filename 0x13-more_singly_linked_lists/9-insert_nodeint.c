#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * insert_nodeint_at_index - insert a node in a list
 * Description: function that insert a node at a given index in a list_t list
 * @head: head of the link list
 * @idx: indexof the node to get
 * @n: integer to add
 * Return: list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp = *head;
	unsigned int i;

	if (tmp == NULL)
		return (NULL);
	i = 0;
	node = (listint_t *)malloc(sizeof(listint_t));
	if(node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = (*head);
		(*head) = node;
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
	}
	return (node);
}
