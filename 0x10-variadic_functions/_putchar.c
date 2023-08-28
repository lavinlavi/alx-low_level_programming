#include "variadic_functions.h"
#include "unistd.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On Success 1;
 * On error, -1 is returned, and errno is set appropriatedly
 */
void _putchar(const char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		write(1, &c[i], 1);
	}
}
