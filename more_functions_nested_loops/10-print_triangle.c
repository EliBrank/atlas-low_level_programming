#include "main.h"

/**
 * print_triangle - draws right triangle of #s
 * @size: side length of triangle
 */

void print_triangle(int size)
{
	int h = 1;
	int pound;
	int spacer;

	if (size > 0)
	{
		while (h <= size)
		{
			spacer = 1;
			while (spacer <= (size - h))
			{
				_putchar(' ');
				spacer++;
			}
			pound = 1;
			while (pound <= h)
			{
				_putchar('#');
				pound++;
			}
			h++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
