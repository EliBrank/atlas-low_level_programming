#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 *
 * Return: string made up of two input strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}
