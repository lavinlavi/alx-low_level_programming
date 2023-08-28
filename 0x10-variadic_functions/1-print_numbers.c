#include "variadic_functions.h"

/**
 * void print_numbers - a function to print  a string
 * @separator: string to be printed between numbers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d",(va_arg(my_list, int)));
		if (*separator && i < (n - 1))
		{
			printf("%s", (separator));
		}
	}
	printf("\n");
}

	
