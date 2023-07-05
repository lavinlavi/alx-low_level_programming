#include <stdlib.h>
#include "main.h"

/**
 * *_memset - populates memory with a specific byte
 * @memArea: memory block to populate
 * @byte: character to replicate
 * @count: replication count of the byte
 *
 * Return: pointer to the populated memory block
 */
char *_memset(char *memArea, char byte, unsigned int count)
{
	unsigned int idx;

	for (idx = 0; idx < count; idx++)
	{
		memArea[idx] = byte;
	}

	return (memArea);
}

/**
 * *_calloc - assigns memory for an array
 * @elemCount: number of elements in the array
 * @elemSize: size of each element
 *
 * Return: pointer to the assigned memory
 */
void *_calloc(unsigned int elemCount, unsigned int elemSize)
{
	char *memory;

	if (elemCount == 0 || elemSize == 0)
		return (NULL);

	memory = malloc(elemSize * elemCount);

	if (memory == NULL)
		return (NULL);

	_memset(memory, 0, elemCount * elemSize);

	return (memory);
}

