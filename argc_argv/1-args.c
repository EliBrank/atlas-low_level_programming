#include "main.h"
#include <stdio.h>

/**
 * main - prints num of args passed into it, then newline
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (always success)
 */

int main(int argc, char *argv[])
{
	(void) *argv[];
	printf("%d\n", argc - 1);
	return (0);
}
