#include "main.h"

/**
 * main - prints the alphabet a-z
 *
 * Return: 0 (always success)
 */

int main(void)
{
	print_alphabet(void);	

	return (0);
}

int print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');

	return (0);
}
