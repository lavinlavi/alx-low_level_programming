#include "3-calc.h"

/**
 * get_op_func - function that returns pointer to the right function
 * @s: the operator
 *
 * Return: returns NULL if operator does not match any otherwise
 * it returns a pointer to the right function for the operation.
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

