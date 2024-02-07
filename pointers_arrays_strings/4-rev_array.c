#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 * @a: input array
 * @n: number of elements in array
 *
 * Return: input array in reverse order
 */

int *reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j;

	for (i = 0, j = (n - 1); i <= j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}

	return (a);
}
