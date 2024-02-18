#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array and inits to 0
 * @nmemb: number of elements in array
 * @size: number of bytes for each element in array
 *
 * Return: allocated array, NULL if failure or if nmemb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int memAlloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memAlloc = nmemb * size;

	arr = malloc(memAlloc);

	if (arr == NULL)
	{
		return (NULL);
	}

	memset(arr, 0, memAlloc);

	return (arr);
}
