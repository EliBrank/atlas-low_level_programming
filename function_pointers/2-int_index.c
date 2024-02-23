#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches array for int
 * @array: array to search
 * @size: size of array
 * @cmp: func to compare values (takes int, returns int)
 *
 * Return: index of first match, -1 if no match/size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
