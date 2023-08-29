#include "function_pointers.h"

/**
 * print_name - a function wrapper for functions that print a name
 * @name: a pointer to the string to be printed.
 * @f: the function pointers
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

