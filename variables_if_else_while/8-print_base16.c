#include <stdio.h>

/**
 * main - prints single-digit base16 numbers
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
