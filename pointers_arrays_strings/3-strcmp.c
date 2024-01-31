#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: 0 if strings are identical, else the diff of s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			return (0);
		}
	}
}
