#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and initializes
 * that array to a given character.
 * @size: size of the array to be created.
 * @c: the character to be used for initialization.
 *
 * Return: returns the pointer to the array if success or NULL if failure.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (ptr);
	}

	ptr = (char *) malloc(size * (sizeof(char)));

	if (!ptr)
	{
		return (ptr);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
