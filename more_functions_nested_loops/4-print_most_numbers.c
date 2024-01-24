#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	if (i != 2 && i != 4)
	{
		while (i < 10)
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
