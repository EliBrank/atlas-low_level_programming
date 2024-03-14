#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements in doubly linked list
 * @h: heead node of list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tmp = h;
	
	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		count++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

	return (count);
}
