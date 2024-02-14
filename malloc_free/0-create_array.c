#include "main.h"
#include <stdlib.h>

/**
 * create_array - makes a char array of specified size
 * @size: how many bytes to allocate to the array
 * @c: char to initialize array
 *
 * Return: pointer to array, NULL if failure
 */

char *create_array(unsigned int size, char c)
{
	char *chArray;
	unsigned int i;

	chArray = malloc(sizeof(char) * size);

	if (chArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		chArray[i] = c;
	}

	return (chArray);
}
