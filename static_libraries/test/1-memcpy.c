#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: where memory is copied
 * @src: where memory is copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
