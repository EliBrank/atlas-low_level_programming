#include "main.h"

/**
 * print_line - draws line of underscores
 * @n: number of times _ is printed
 */

void print_line(int n)
{
	int p = 0;

	if (n > 0)
	{
		while (p < n)
		{
			_putchar('_');
			p++;
		}
	}
	_putchar('\n');
}
