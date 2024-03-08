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
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	tmp = *head;
	i = 0;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
}
