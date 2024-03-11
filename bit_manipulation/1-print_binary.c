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
	int bit = 0;
	int binaryNum = 0;
	int printLeader = 0;
	int numBits_int = sizeof(int) * 8;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < numBits_int; i++)
	{
		bit = n & 1;
		binaryNum = (binaryNum << 1) | bit;
		n >>= 1;
	}

	for (i = 0; i < numBits_int; i++)
	{
		bit = (binaryNum >> i) & 1;
		if (bit == 1)
			printLeader = 1;
		if (printLeader == 1)
			_putchar (bit + '0');
	}
}
