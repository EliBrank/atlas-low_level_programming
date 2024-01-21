#include "main.h"

/**
 * main - prints "_putchar"
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char *s;
	int i;

	s = "_putchar";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	return (0);
}
