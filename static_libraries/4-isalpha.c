#include "main.h"

/**
 * _isalpha - prints a 1 if input is a letter, 0 otherwise
 * @c: checked input
 *
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
