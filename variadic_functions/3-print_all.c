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
	int len;
	int noMatch = 0;
	int i = 0;
	const char *f = format;
	va_list args;

	while (*f != '\0')
		f++;
	len = f - format;
	va_start(args, format);
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
				{
					char *str = va_arg(args, char*);
					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					break;
				}
			default:
				noMatch = 1;
		}
		if (i < (len - 1) && (noMatch != 1))
			printf(", ");
		noMatch = 0;
		i++;
	}
	va_end(args);
	putchar('\n');
}
