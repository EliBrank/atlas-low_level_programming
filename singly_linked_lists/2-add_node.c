#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prepends node to linked list
 * @head: current first element in list
 * @str: string to duplicate for prepended element
 *
 * Return: address of added element, NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	if (head == NULL)
		return (NULL);

	list_t *tmp = NULL;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);

	if (tmp->str == NULL)
	{
		free(tmp->str);
		free(tmp);
		return (NULL);
	}

	tmp->len = strlen(str);

	tmp->next = *head;

	*head = tmp;

	return (*head);
}
