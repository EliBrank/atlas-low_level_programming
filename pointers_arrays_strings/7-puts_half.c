#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */

void puts_half(char *str)
{
	int len = 0;
	int pos;
	int i;

	while (*str != '\0')
	{
		str++;
		len++;
	}
	if (len % 2 == 0)
	{
		pos = len / 2;
	}
	else
	{
		pos = (len - 1) / 2;
	}

	str = str - pos;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
