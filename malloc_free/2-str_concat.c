#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *catStr;
	int i;
	int j;
	int lenS1;
	int lenS2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	lenS1 = strlen(s1);
	lenS2 = strlen(s2);

	catStr = malloc(sizeof(char) * (lenS1 + lenS2) + 1);

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
	for (j = 0; j < lenS2; j++, i++)
	{
		catStr[i] = s2[j];
	}

	catStr[i] = '\0';

	return (catStr);
}
