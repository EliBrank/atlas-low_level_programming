#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums all data of a linked list
 * @head: first element of list
 *
 * Return: sum of ints in list, 0 if empty list
 */

int sum_listint(listint_t *head)
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
