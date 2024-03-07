#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - appends node to linked list
 * @head: current first element in list
 * @n: int to add for appended element
 *
 * Return: address of added element, NULL if failure
 */

list_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *tmp;

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
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
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
