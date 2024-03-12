#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts node at specific position
 * @head: first element of list
 * @idx: index where new node should be added
 *
 * Return: address of  node, NULL if failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = NULL;
	listint_t *new = NULL;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (*head);
	}

	if (idx == 0)
		return (add_nodeint(head, n));


	tmp = *head;
	i = 0;
	while (tmp->next != NULL && i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	return (tmp);
}

/**
 * add_nodeint - prepends node to linked list
 * @head: current first element in list
 * @n: int to duplicate for prepended element
 *
 * Return: address of added element, NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
