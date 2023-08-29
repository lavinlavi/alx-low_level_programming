#include "3-calc.h"

int op_mod(int a, int b);
int op_div(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);


/**
 * op_add - function to sum two variables together
 * @a: first variable
 * @b: the second variable
 *
 * Return: returns the sum of the two arguments.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to sum two variables together
 * @a: first variable
 * @b: the second variable
 *
 * Return: returns the difference of the two arguments.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - function to sum two variables together
 * @a: first variable
 * @b: the second variable
 *
 * Return: returns the division of the two arguments.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mul - function to sum two variables together
 * @a: first variable
 * @b: the second variable
 *
 * Return: returns the product of the two arguments.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - function to sum two variables together
 * @a: first variable
 * @b: the second variable
 *
 * Return: returns the modulus of the two arguments.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a % b);
}

