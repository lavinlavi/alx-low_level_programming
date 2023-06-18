#include <main.h>

void _puts_recursion(char *s)
{
/**
*Function that takes a string and passes each character to function _puthar
*for output
*/
if (*s == '\0')
{
_putchar("\n");
return;
}
else
{
_putchar(*s);
s = s + 1;
_puts_recursion(s);
}
}
