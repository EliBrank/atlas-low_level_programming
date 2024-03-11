#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints binary representation of a number
 * @n: decimal number to print in binary
 */

void print_binary(unsigned long int n)
{
	/* example is 12, 1100 */
	int i;
	unsigned long int bit = 0;
	int printLeader = 0;
	unsigned long int numBits = sizeof(int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/*
	for (i = 0; i < numBits; i++)
	{
		bit = n & 1;
		binaryNum = (binaryNum << 1) | bit;
		n >>= 1;
	}

	for (i = 0; i < numBits_ulint; i++)
	{
		bit = (binaryNum >> i) & 1;
		if (bit == 1)
			printLeader = 1;
		if (printLeader == 1)
			_putchar (bit + '0');
	}
	*/

	for (i = numBits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1)
			printLeader = 1;
		if (printLeader == 1)
			_putchar (bit + '0');
	}
}
