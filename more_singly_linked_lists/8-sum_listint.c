#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums all data of a linked list
 * @head: first element of list
 *
 * Return: sum of ints in list
 */

int sum_listint(listint_t *head)
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
