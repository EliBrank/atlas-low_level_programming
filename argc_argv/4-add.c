#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds together positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success or no nums, 1 if NaN symbol 
 */

int main(int argc, char **argv)
{
	int sum;
	int i;
	int j;
	int numLen;

	if (argc == 1)
	{
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		numLen = strlen(argv[i]);
		for (j = 0; j < numLen; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
