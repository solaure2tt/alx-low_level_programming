#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
/**
 * countlist - count elements of a double link list
 * Description: count all the elements of a double link list
 * @h: double link list
 * Return: number of elements
 */
size_t countlist(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
/**
 * delete_dnodeint_at_index - delete a node in a double link list
 * Description: function that delete a node at a given index in a list_t list
 * @head: head of the link list
 * @index: indexof the node to delete
 * Return: 1 if succeed or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, __attribute__((unused)) *node;
	unsigned int i;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		if (countlist(tmp) == 1)
		{
			head = NULL;
		}
		else
		{
			(*head) = tmp->next;
			(*head)->prev = NULL;
			free(tmp);
		}
		return (1);
	}
	for (i = 0; tmp != NULL && i < (index - 1); i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	node = tmp->next->next;
	node->prev = tmp->next->prev;
	free(tmp->next);
	tmp->next = node;
	return (1);
}
