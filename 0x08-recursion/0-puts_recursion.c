#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: my string passed from the main function.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
else
{
_putchar(*s);
s = s + 1;
_puts_recursion(s);
}
}
