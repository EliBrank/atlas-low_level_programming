#include "main.h"

/**
 * _isdigit - checks for digit (0-9)
 * @c: input num
 *
 * Return: 1 if a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
