#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Origin Point
 * @size: The size of the memory block to be allocated
 * Returns: Pointer to the allocated memory, or terminates program with status code 98 if allocation fails
 */
void *malloc_checked(unsigned int size)
{
	void *allocated_mem;

	allocated_mem = malloc(size);
	if (allocated_mem == NULL)
		exit(98);
	return (allocated_mem);
}

