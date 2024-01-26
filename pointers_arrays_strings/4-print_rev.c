#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: input string
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}

	_putchar('\n');
}
