#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index.
 * @n: pointer to the string of bits.
 * @index: the index to be changed.
 *
 * Return: 1 if it workd or -1 if it didn't work.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (!n)
	{
		return (-1);
	}
	for (i = 0; n[i]; i++)
	{
		if (i == index)
		{
			if (n[i] == 1)
			{
				return (1);
			}
			else
				n[i] = 1;
			return (1);
		}
	}
	return (-1);
}
