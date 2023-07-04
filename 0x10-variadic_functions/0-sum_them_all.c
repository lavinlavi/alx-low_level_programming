#include "variadic_functions.h"

/**
 * calculate_sum - calculates the sum of all the provided parameters.
 * @n: number of arguments.
 *
 * Return: the sum of the parameters.
 */
int calculate_sum(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

