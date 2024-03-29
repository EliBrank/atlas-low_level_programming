#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets number of elements in a linked list
 * @h: linked list to check
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned long count = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
