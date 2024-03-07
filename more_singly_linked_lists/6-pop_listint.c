#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes head of linked list
 * @head: first element of list
 *
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = NULL;
	int n;

	if (head == NULL)
	{
		return (0);
	}

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
