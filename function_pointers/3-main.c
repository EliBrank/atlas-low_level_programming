#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - takes input, runs other funcs
 * @argc: num arguments (limit 4)
 * @argv: args (two nums and math operation)
 *
 * Return: 0 if success, 1 if failure
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	char op;
	char nt;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = argv[2][0];
	nt = argv[2][1];
	if ((op != '+' && op != '-' && op != '*' && op != '/' &&
		op != '%') || nt != '\0')
	{
		printf("Error\n");
		return (99);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = get_op_func(argv[2])(a, b);


	printf("%d\n", result);

	return (0);
}
