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
	dlistint_t *tmp = NULL;
	dlistint_t *new = NULL;
	unsigned int i;

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
		(*h)->prev = new;
		new->next = *h;
		*h = new;
		return (*h);
	}
	tmp = *h;
	i = 0;
	while (tmp != NULL && i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = tmp->prev;
	tmp->prev->next = new;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}
