#include "main.h"

/**
 * _strcpy - copies string to destination buffer
 * @dest: pointer to buffer
 * @src: input string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	int len = 0;

	while (*src != '\0')
	{
		*dest++ = *src++;
		len++;
	}
	*dest = '\0';
	dest -= len;

	return (dest);
}
