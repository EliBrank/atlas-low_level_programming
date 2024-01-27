#include "main.h"

/**
 * rev_string - returns string in reverse
 * @s: input string
 */

void rev_string(char *s)
{
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}

	char temp[len];
	int i = len;
	int j = 0;

	while (i--)
	{
		temp[j] = s[i];
		j++;
	}
	temp[len] = '\0';
	i = len;
	j = 0;
	while (i--)
	{
		s[j] = temp[j];
		j++;
	}

