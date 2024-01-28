#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: input array
 * @n: number of integers to print from array
 */

void print_array(int *a, int n)
{
	int i = 0;
	int last = n - 1;

	if (n > 0)
	{
		while (i < last)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[last]);
	}
}
