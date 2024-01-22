#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet a-z 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
