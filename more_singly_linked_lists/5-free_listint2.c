#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list, sets head to NULL
 * @head: first element in list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
