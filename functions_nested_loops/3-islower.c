#include "main.h"

/**
 * _islower - prints the alphabet a-z 10 times
 * @c checked char
 *
 * Return: 1 if lowercase, else 0
 */

int _islower(int c)
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

	return (0);
}
