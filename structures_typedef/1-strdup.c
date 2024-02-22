#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	char *dupStr;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	for(len = 0; str[len] != '\0'; len++);
	str -= len;

	dupStr = malloc(sizeof(char) * len + 1);

	if (dupStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dupStr[i] = str[i];
	}

	dupStr[i] = '\0';

	return (dupStr);
}
