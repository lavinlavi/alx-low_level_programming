#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a given name using a specified printing function
 * @name: name to be printed
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

