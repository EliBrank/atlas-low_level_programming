#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - execs func on each element of array
 * @array: array to exec over
 * @size: size of array to exec over
 * @action: func to exec on each element (takes int, returns nothing)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
