#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - prepends node to linked list
 * @head: current first element in list
 * @str: string to duplicate for prepended element
 *
 * Return: address of added element, NULL if failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	new->len = _strlen(str);

	new->next = *head;

	*head = new;

	return (*head);
}
