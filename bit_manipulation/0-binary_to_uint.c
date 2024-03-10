#include "main.h"
#include <stdlib.h>

/**
 * binary to uint - converts binary number to unsigned int
 * @b: binary number to be converted (string)
 *
 * Return: converted unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int decimalNum = 0;
	unsigned int twoPower = 1;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			decimalNum += twoPower;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		twoPower <<= 1;
	}
	return (decimalNum);
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
