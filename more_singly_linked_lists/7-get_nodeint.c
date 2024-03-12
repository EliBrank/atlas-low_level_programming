#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets nth node of linked list
 * @head: first element of list
 * @index: position of node in list to get
 *
 * Return: node specified by index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i;

	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}

	return (NULL);
}
