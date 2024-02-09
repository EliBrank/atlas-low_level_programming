#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers, then newline
 * @argc: number of arguments (2)
 * @argv: numbers to multiply
 *
 * Return: 0 if 2 arguments, else 1
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
