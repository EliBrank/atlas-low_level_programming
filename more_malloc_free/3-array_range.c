#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of ints, min to max
 * @min: start value for int array
 * @max: end value for int array
 *
 * Return: pointer to array, NULL if failure or min > max
 */

int *array_range(int min, int max)
{
	int numInts;
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	else if (min == max)
	{
		numInts = 1;
	}
	else
	{
		numInts = max - min;
	}

	arr = malloc(sizeof(int) * numInts);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < numInts; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
