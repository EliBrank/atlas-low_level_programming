#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @h: head node in list
 * @idx: position to insert new node
 * @n: value for new node
 *
 * Return: address of new node, NULL if failure/index outside range
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL;
	dlistint_t *tmp = NULL;
	dlistint_t *tmp2 = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}

	tmp = *h;
	while (idx > 1)
	{
		tmp = tmp->next;
		idx--;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	tmp2 = tmp->next;
	tmp->next = new;
	tmp2->prev = new;
	new->next = tmp2;
	new->prev = tmp;
	return (new);
}
