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
	list_t *new = NULL;

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

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
