#include <stdio.h>

/**
 * main - prints all combinations of single-digit nums 
 *
 * Return: 0 (always success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
