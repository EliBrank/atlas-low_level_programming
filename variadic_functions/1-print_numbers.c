#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints nums, then newline
 * @separator: string printed between nums
 * @n: number of ints passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	putchar('\n');
}
