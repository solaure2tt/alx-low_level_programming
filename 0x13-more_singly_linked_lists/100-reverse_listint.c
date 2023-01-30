#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

/**
 * reverse_listint - reverse a list
 * Description: function that reverse a list_t list
 * @head: head of the link list
 * Return: list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *next;

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	next = tmp->next;
	if (next == NULL)
		return (tmp);
	reverse_listint(&next);
	tmp->next->next = tmp;
	tmp->next = NULL;
	*head = next;
	return (*head);
}
