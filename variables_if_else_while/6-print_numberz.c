#include <stdio.h>

/**
 * main - prints number 0-9
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
