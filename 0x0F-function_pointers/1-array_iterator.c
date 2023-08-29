#include "function_pointers.h"

/**
 * array_iterator - function to execute action on array
 * @array: array to be acted upon
 * @size: size of the array
 * @action: the function to carry out the action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (*array && (*action))
	{

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

