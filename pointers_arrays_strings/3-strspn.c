#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: initial string to compare
 * @accept: string to check against
 *
 * Return: number of matching characters in s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (match < i)
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
		}
	}
	return (match);
}
