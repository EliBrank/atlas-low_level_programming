#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: input string to analyze for length
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0)
}
