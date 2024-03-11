#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: decimal number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i;
	int bit = 0;
	int printLeader = 0;
	int numBits = sizeof(unsigned long int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = numBits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			printLeader = 1;
		if (printLeader == 1)
			_putchar (bit + '0');
	}
}
