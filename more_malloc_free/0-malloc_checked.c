#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc for input
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated data, 98 if failure
 */

void *malloc_checked(unsigned int b)
{
	void *data;

	data = malloc(b);

	if (data == NULL)
	{
		exit (98);
	}

	return (data);
}
