#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>
/**
 * _strlen - size of a string
 * Description: function that returns the length of a string
 * @s: parameter
 * Return: number
 */

int _strlen(const char *s)
{
	int i, res = 0;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		res++;
		i++;
	}
	return (res);

}

/**
 * add_nodeint - add on the head of a list
 * Description: function that adds a new node at the beginning of a list_t list
 * @head: head of the link list
 * @n: integer of the node to add
 * Return: list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
