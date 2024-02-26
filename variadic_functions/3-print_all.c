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
	int len = 0, i = 0, noMatch = 0;
	va_list args;

	while (format != NULL && format[len] != '\0')
		len++;
	va_start(args, format);
	while (format != NULL && i < len)
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
					{
						printf("(nil)");
						break;
					}
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
