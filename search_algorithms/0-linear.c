#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers
 * @array: array to search
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
