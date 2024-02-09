#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds together positive numbers
 * @argc: number of arguments
 * @argv: numbers to add
 *
 * Return: 0 if success or no nums, 1 if NaN
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	if (argc == 1)
	{
		putchar('\n');
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
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
