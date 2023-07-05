#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Structure for holding an operator and its associated function
 *
 * @op: The operator
 * @f: The function associated with the operator
 */
typedef struct op
{
	char *op;    /* The operator */
	int (*f)(int a, int b);    /* The function associated with the operator */
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

