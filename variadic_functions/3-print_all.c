#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all string, int args, then newline
 */

void print_all(const char * const format, ...)
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

	va_end(args);

	putchar('\n');
}
