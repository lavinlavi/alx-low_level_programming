#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Assigns memory block using malloc
 * @b: Quantity of bytes to be assigned
 *
 * Return: A pointer pointing to the assigned memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocatedMem;

	allocatedMem = malloc(b);

	if (allocatedMem == NULL)
		exit(98);

	return (allocatedMem);
}

