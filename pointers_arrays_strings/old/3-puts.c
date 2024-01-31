#include "main.h"

/**
 * _puts - returns string with newline
 * @str: input string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
