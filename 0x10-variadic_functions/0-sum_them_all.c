#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - ***calculates the sum of all its parameters***
 * @n: ***number of arguments passed to the function***
 *
 * Return: ***the resulting sum***
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);

	for (i = 1; i <= n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

