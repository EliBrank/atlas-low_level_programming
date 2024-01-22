#include "main.h"

/**
 * print_alphabet - prints the alphabet a-z
 */

void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
