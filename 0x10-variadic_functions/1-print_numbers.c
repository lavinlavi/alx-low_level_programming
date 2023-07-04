#include "variadic_functions.h"

/**
 * display_numbers - Prints numbers, followed by a new line.
 * @separator: Pointer to the string to be printed between numbers.
 * @n: Number of integers passed to the function.
 *
 * You are allowed to use printf.
 * If separator is NULL, it is not printed.
 * A new line is printed at the end of the function.
 *
 * Return: No return.
 */
void display_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}

