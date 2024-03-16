#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index in doubly linked list
 * @head: head node in list
 * @index: position of node in list to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *follow = NULL;

	if (*head == NULL)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (tmp != NULL && index > 1)
	{
		tmp = tmp->next;
		index--;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	if (tmp->next->next == NULL)
	{
		free(tmp->next);
		tmp->next = NULL;
	}
	else
	{
		follow = tmp->next->next;
		free(tmp->next);
		tmp->next = follow;
		follow->prev = tmp;
	}

	return (1);
}
