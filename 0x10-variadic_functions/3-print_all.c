#include "variadic_functions.h"

/**
 * print_all - a function to print all formats
 * @format: list containing the formats
 */

void print_all(const char * const format, ...)
{
	int i;
	va_list(my_args);

	i = 0;
	va_start(my_args, format);
	while(format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 's')
		{
			printf("%s", va_arg(my_args, char *));
		}
		if (format[i] == 'i' || format[i] == 'f')
		{
			printf("%d", va_arg(my_args, int));
		}
		i++;
	}
}

