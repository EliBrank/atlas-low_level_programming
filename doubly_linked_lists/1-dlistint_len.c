#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - gets length of doubly linked list
 * @h: head node in list
 *
 * Return: lenth of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *tmp = h;

	if (h == NULL)
		return (0);

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	return (count);

}
