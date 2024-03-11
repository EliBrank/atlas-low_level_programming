#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets value of a bit at given index
 * @n: int to evaluate
 * @index: index of int to check (in binary)
 *
 * Return: value of bit at index, -1 if failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	int bit = 0;
	int numBits_ulint = sizeof(unsigned long int) * 8;

	for (i = 0; i < numBits_ulint; i++)
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
