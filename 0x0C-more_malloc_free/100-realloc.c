#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - modifies the size of a memory block using malloc and free
 * @prevPtr: pointer to the memory previously allocated by malloc
 * @old_size: the size of the previously allocated memory for prevPtr
 * @new_size: the size of the new memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *prevPtr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr;
	char *oldPtr;
	unsigned int index;

	if (new_size == old_size)
		return (prevPtr);

	if (new_size == 0 && prevPtr)
	{
		free(prevPtr);
		return (NULL);
	}

	if (!prevPtr)
		return (malloc(new_size));

	newPtr = malloc(new_size);
	if (!newPtr)
		return (NULL);

	oldPtr = prevPtr;

	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			newPtr[index] = oldPtr[index];
	}

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			newPtr[index] = oldPtr[index];
	}

	free(prevPtr);
	return (newPtr);
}

