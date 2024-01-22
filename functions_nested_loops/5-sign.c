#include "main.h"

/**
 * print_sign - prints '+' for positive input, '-' for negative, 0 for 0
 * @n: checked num
 *
 * Return: 1 if letter, else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
