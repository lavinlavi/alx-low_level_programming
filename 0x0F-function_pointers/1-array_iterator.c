#include "function_pointers.h"

/**
 * array_iterator - function to execute action on array
 * @array: array to be acted upon
 * @size: size of the array
 * @action: the function to carry out the action
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (*array && (*action) && size > 0)
	{

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

