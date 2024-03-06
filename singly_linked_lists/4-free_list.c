#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: first element in list
 */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
