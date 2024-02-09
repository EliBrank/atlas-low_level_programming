#include "main.h"

/**
 * _atoi - converts string to an integer
 * @s: string to be converted
 *
 * Return: integer after conversion from string
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	int numReached = 0;

	while (*s != '\n')
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
			numReached = 1;
		}
		else if (*s == ' ' || *s == '+')
		{
			/* ignores spaces and plus signs */
		}
		else if (numReached == 1)
		{
			break;
		}

		s++;
	}
	return (result * sign);
}
