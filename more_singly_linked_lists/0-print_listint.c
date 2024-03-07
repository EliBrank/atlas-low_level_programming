#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints each element in linked list
 * @h: first element of linked list to print
 *
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	unsigned long count = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->next;
		count++;
	}

	return (count);
}
