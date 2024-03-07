#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: first element in list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
