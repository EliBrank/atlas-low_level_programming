#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_args - prints input args based on format
 * @format: string of input types
 * @args: var number of args
 */

void print_args(const char *format, va_list args)
{
	int len = 0, i = 0, noMatch = 0;

	while (format != NULL && format[len] != '\0')
			len++;
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
}



/**
 * print_all - initializes printing args, then prints newline
 * @format: string specifying datatypes to be printed, in order
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	print_args(format, args);

	va_end(args);
	putchar('\n');
}
