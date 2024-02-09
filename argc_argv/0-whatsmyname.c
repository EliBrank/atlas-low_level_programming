#include "main.h"
#include <stdio.h>

/**
 * main - prints program name, then newline
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (always success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
