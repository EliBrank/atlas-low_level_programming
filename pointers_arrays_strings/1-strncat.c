#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string to be concatenated
 * @src: second string to be concatenated
 * @n: cut-off in bytes for src string
 *
 * Return: string made up of two input strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	int err = n;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
		if (i * sizeof(src[0]) == err)
		{
			break;
		}
	}

	dest[len] = '\0';

	return (dest);
}
