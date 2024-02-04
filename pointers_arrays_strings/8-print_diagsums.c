#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals in a square matrix
 * @a: array to process
 * @size: number of rows and columns in array
 *
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sumD1;
	int sumD2;
	int index;

	sumD1 = 0;
	sumD2 = 0;
	for (i = 0; i < size; i++)
	{
		index = i * (size + 1);
		sumD1 += a[index];

		index = i * size + (size - 1 - i);
		sumD2 += a[index];
	}
	printf("%d, %d\n", sumD1, sumD2);
}
