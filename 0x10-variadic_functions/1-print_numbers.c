#include "variadic_functions.h"

/**
 * print_numbers - a function to print  a string
 * @n: number of integers to be printed.
 * @separator: string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", (va_arg(my_list, int)));
		if (*separator != '\0' && i < (n - 1))
		{
			printf("%s", (separator));
		}
	}
	printf("\n");
}

