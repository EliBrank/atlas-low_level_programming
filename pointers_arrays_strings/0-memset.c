#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: starting address to overwrite
 * @b: constant byte used to fill memory
 * @n: how many bytes of memory to fill
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
