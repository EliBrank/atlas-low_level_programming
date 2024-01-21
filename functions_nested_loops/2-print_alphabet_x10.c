#include "main.h"

/**
 * main - prints the alphabet a-z 10 times
 *
 * Return: 0 (always success)
 */

int print_alphabet(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');

	return (0);
}
