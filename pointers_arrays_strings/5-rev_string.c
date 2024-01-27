#include "main.h"
#include <stdlib.h>

/**
 * rev_string - returns string in reverse
 * @s: input string
 */

void rev_string(char *s)
{
	int len = 0;
	char *end = s;
	char *temp;
	int i;
	int j;

	while (*end != '\0')
	{
		len++;
		end++;
	}

	temp = malloc(len);
	i = len;
	j = 0;

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
	free(temp);
}
