#include "main.h"

/**
 * _puts_recursion - A function to print a string
 *
 * @s: Pointer to the array of characters.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}

