#include "main.h"
/**
 * _pow_recursion - function to return the value x raised to power y
 * @y: The exponent of the calculation.
 * @x: The integer value that is the base.
 *
 * Return: The return function to pass the answer back to the main function.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

