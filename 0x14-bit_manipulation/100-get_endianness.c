#include "main.h"

/**
 * get_endianness - check endianness of a system
 * Return: 1 if little endian or 0 if big endian
 */

int get_endianness(void)
{
	int ptr;

	ptr = 1;

	if (*(char *)&ptr == 1)
		return (1);
	else
		return (0);
}
