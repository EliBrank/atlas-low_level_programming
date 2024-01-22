#include "main.h"

/**
 * times_table - prints 9x9 times table
 */

void times_table(void)
{
	int x;
	int y;
	int mult;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			mult = x * y;
			if (mult > 9)
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
