#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * delete_nodeint_at_index - delete a node in a list
 * Description: function that delete a node at a given index in a list_t list
 * @head: head of the link list
 * @index: indexof the node to delete
 * Return: 1 if succeed or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, __attribute__((unused)) *node;
	unsigned int i;

	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < (index - 1); i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	node = tmp->next->next;
	free(tmp->next);
	tmp->next = node;
	return (1);
}
