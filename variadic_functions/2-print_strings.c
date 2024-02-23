#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, then newline
 * @separator: string printed between strings
 * @n: number of string passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
}
