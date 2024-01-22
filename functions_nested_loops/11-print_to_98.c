#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - counts from input num to 98
 * @n: num to count from
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	printf("98\n");
}
