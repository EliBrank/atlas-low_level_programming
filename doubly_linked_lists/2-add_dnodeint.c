#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - prepends new node to doubly linked list
 * @head: head node in list
 * @n: value for added node
 *
 * Return: address of new element, NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	new->next = *head;
	(*head)->prev = new;

	*head = new;

	return (*head);
}
