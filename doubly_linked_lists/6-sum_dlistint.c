#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - gets sum of all integer data in doubly linked list
 * @head: head node in list
 *
 * Return: sum of integer data for all nodes in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
