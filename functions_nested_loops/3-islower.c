#include "main.h"

/**
 * _islower - prints a 1 if input is lowercase, 0 otherwise
 * @c: checked input
 *
 * Return: 1 if letter, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
