#include "main.h"

/**
 * print_binary - function to print a decimal in binary
 * @n: the decimal
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int s;

	if (n == 0)
	{
		_putchar('0');
	}

	for (temp = n, s = 0; (temp >>= 1) > 0; s++)
		;
	while (s >= 0)
	{
		if ((n >> s) & 1)
			_putchar('1');
		else
			_putchar('0');
		s--;
	}
}

