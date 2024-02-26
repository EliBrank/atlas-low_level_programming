#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints all string, int args, then newline
 * @format: string specifying datatypes to be printed, in order
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	int len;
	const char *f;
	char *separator = ", ";

	f = format;
	while (*f != '\0')
		f++;
	len = f - format;
	va_start(args, format);
	i = 0;
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				if (va_arg(args, char*) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
				break;
		}
		if (separator != NULL && i < (len - 1))
			printf("%s", separator);
		i++;
	}
	va_end(args);
	putchar('\n');
}
