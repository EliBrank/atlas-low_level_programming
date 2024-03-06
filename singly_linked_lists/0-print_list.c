#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints each element in linked list
 * @h: first element of linked list to print
 *
 * Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	unsigned long count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", tmp->len, tmp->str);

		tmp = tmp->next;
		count++;
	}

	return (count);
}
