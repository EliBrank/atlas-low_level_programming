#include "main.h"

/**
 * print_diagonal - draws line of backslashes diagonally
 * @n: number of times \ is printed
 */

void print_diagonal(int n)
{
	int p = 0;
	int s;

	if (n > 0)
	{
		while (p < n)
		{
			s = 0;
			while (s < p)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			p++;
		}
	}
	_putchar('\n');
}
