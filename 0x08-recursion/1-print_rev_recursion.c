#include "main.h"
/**
 *_print_rev_recursion: calls recursively within an if conditional structure then release to putchar in reverse
 *@s pointer to the string passed in the main function.
 */
void _print_rev_recursion(char *s)
{ 
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);

	}
}

