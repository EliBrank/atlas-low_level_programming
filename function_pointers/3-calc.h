#ifndef CALC_H
#define CALC_H

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - stores operator and function
 * @opSign: mathematical operator
 * @function: function to carry out operation
 *
 * Description: allows other code to exec func based on sign
 */

typedef struct op
{
	char *opSign;
	int (*function)(int, int);
} op_t;

#endif
