#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - gets math operator for two ints
 * @s: string which determines operation
 *
 * Return: result of called func with ints as input, NULL if failure
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	i = 0;
	while (ops[i].opSign != NULL)
	{
		if (*s == *(ops[i].opSign))
		{
			return (ops[i].function);
		}
		i++;
	}
	return (NULL);
}
