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

	chArray = malloc(sizeof(char) * size);

	if (chArray == NULL)
	{
		return (NULL);
	}

	*chArray = c;

	return (chArray);
}
