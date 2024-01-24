#include "main.h"

/**
 * print_square - draws square of #s
 * @size: side length of square
 */

void print_square(int size)
{
	int y = 0;
	int x;

	if (size > 0)
	{
		while (y < size)
		{
			x = 1;
			while (x < size)
			{
				_putchar('#');
				x++;
			}
			_putchar('#');
			_putchar('\n');
			y++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
