#include "main.h"

/**
 * print_last_digit - prints last digit of input num
 * @n: checked num
 *
 * Return: n
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');

	return (n);
}
