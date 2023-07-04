#include <stdio.h>

/**
 * initial_func - a function that runs before main
 * Return: void, no return.
 */

void __attribute__ ((constructor)) initial_func()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

