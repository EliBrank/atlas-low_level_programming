#include "search_algos.h"

int binary_search_rec(int *array, int low_index, int high_index, int value);
void print_array(const int *array, int low_index, int high_index);

/**
 * binary_search - initializes binary search process
 * @array: array to search
 * @size: number of elements in array
 * @value: value to search for in array
 *
 * Return: first index where value is located, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int value_index;
	int low = 0;
	int high = size - 1;

	return (binary_search_rec(array, low, high, value));
}

/**
 * binary_search_rec - searches recursively for value in array
 * @array: array to search
 * @low_index: lowest index in array partition
 * @high_index: highest index in array partition
 * @value: value to search for in array
 *
 * Return: first index where value is located, -1 if not found
 */
int binary_search_rec(int *array, int low_index, int high_index, int value)
{
	int mid_index = low_index + ((high_index - low_index) / 2);

	/* base case: value not found */
	if (low_index > high_index)
		return (-1);

	printf("Searching in array: ");
	print_array(array, low_index, high_index);

	/* base case: value was found */
	if (array[mid_index] == value)
		return (mid_index);
		/* checks lower side of array selection for value */
	else if (array[mid_index] > value)
		return (binary_search_rec(array, low_index, mid_index - 1, value));
		/* checks higher side of array selection for value */
	else
		return (binary_search_rec(array, mid_index + 1, high_index, value));
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @low_index: start position for array to print
 * @high_index: end position for array to print
 */
void print_array(const int *array, int low_index, int high_index)
{
	int i = low_index;

	while (array && i <= high_index)
	{
		if (i > low_index)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
