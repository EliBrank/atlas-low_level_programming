#include "main.h"

/**
 * string_toupper - converts lowercase letters of string to uppercase
 * @s: input string to convert
 *
 * Return: string after conversion to uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
