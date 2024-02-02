#include "main.h"
#include <stddef.h>

/**
 * _strncpy - copies over n chars from src to dest
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: cut-off in bytes for src to copy over
 *
 * Return: string with n chars of src copied over
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;
	unsigned long int err = n;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (i * sizeof(src[0]) == err)
		{
			break;
		}
	}
	dest[i] = '\0';

	while (i <= len)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
