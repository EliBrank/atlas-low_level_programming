#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find in string
 *
 * Return: pointer to first occurence of located char
 */

char *_strchr(char *s, char c)
{
	int i;
	char *p;

	if (c == 0)
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		p = 0;
	}
	return (p);
}
