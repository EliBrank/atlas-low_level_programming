#include "main.h"
#include <stdio.h>

/**
 * main - prints all received arguments, then newline
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (always success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != argv[argc]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
