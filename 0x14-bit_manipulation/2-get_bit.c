#include "main.h"

/**
 * get_bit - a function that return the value of a bit
 * at a given index.
 * @n: the value of the decimal.
 * @index: the index to be checked.
 *
 * Return: the value of the bit at index or -1 if an error
 * occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int s;

	if (index > 64)
	{
		return (1);
	}

	s = n >> index;

	return (s & 1);
}
