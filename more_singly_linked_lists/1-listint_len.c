#include "lists.h"
#include <stdio.h>

/**
 * listint_len - gets number of elements in a linked list
 * @h: linked list to check
 *
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned long count = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
