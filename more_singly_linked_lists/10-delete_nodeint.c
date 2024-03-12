#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at specified index of linked list
 * @head: first node in list
 * @index: position of node to be deleted
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = NULL;
	listint_t *follow = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	i = 0;
	while (tmp != NULL && i < (index - 1))
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || tmp->next == NULL)
		return (-1);

	follow = tmp->next->next;

	free(tmp->next);

	tmp->next = follow;

	return (1);
}
