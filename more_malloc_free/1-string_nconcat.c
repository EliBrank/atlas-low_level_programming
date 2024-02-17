#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: number of bytes from s2 to concatenate
 *
 * Return: concatenated string, NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catStr;
	unsigned int i;
	unsigned int j;
	unsigned int lenS1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);

	catStr = malloc(sizeof(char) * (lenS1 + n) + 1);

	if (catStr == NULL)
	{
		return (NULL);
	}

	/* loop through first string */
	for (i = 0; i < lenS1; i++)
	{
		catStr[i] = s1[i];
	}

	/* loop through second string */
	for (j = 0; j < n; j++, i++)
	{
		catStr[i] = s2[j];
	}

	catStr[i] = '\0';

	return (catStr);
}
