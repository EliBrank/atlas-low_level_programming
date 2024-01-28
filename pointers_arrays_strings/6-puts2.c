#include "main.h"

/**
 * puts2 - prints every other char in a string
 * @str: input string
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str = str - len;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
