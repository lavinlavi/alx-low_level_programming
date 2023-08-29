#include "function_pointers.h"

/**
 * int_index - return the index of the first element for which
 * cmp does not return 0
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: function to be applied over all the members of the array.
 *
 * Return: returns the indes of the first elent for which cmp does 
 * not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (*array && (*cmp))
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}

