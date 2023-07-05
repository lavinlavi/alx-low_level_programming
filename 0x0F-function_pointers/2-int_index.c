#include "function_pointers.h"

/**
 * int_index - searches for the index of an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or the size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

