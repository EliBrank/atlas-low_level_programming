#include "main.h"

/**
 * main - prints the alphabet a-z 10 times
 *
 * Return: 0 (always success)
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
