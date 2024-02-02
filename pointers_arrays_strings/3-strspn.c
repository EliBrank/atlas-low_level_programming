#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: initial string to compare
 * @accept: string to check against
 *
 * Return: difference in bytes of between first matched char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int diff;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != accept[i])
		{
			s[i] =
		}
	}
}
