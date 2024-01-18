#include <stdio.h>

/**
 * main - prints alphabet except for "q, e"
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
