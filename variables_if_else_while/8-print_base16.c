#include <stdio.h>

/**
 * main - prints single-digit base16 numbers
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
