#include "main.h"

/**
 * clear_bit - a function to set to 0 a bit at a given
 * index.
 * @n: the value to be edited
 * @index: the index of the bit
 * Return: 1 if it worked or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;
	unsigned int s;

	if (index > 64)
	{
		return (-1);
	}

	s = index;

	for (g = 1; s > 0; g *= 2, s--)
		;
	if ((*n >> index) & 1)
	{
		*n -= g;
	}

	return (1);
}
