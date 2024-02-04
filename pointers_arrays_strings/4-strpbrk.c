#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of matching chars
 * @s:string to be searched
 * @accept: string to search against
 *
 * Return: pointer to first char in s that matches char in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char *p;

	p = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
