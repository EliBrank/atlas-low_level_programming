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

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
