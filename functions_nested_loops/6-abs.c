#include "main.h"

/**
 * _abs - prints '+' for positive input, '-' for negative, 0 for 0
 * @n: checked num
 *
 * Return: 1 if letter, else 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		int n;

		n = (n * -1);
		_putchar(n);

		return (0);
	}
	else
	{
		_putchar(n);

		return (0);
	}

	return (0);
}
