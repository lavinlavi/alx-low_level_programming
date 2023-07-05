#include "variadic_functions.h"

/**
 * print_all - Outputs any data type.
 * @format: A string of characters denoting the argument types.
 *
 * No return value.
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	unsigned int index_main = 0, index_secondary, flag_comma = 0;
	char *text;
	const char types[] = "cifs";

	va_start(arg_list, format);
	while (format && format[index_main])
	{
		index_secondary = 0;
		while (types[index_secondary])
		{
			if (format[index_main] == types[index_secondary] && flag_comma)
			{
				printf(", ");
				break;
			} index_secondary++;
		}
		switch (format[index_main])
		{
		case 'c':
			printf("%c", va_arg(arg_list, int)), flag_comma = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg_list, int)), flag_comma = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg_list, double)), flag_comma = 1;
			break;
		case 's':
			text = va_arg(arg_list, char *), flag_comma = 1;
			if (!text)
			{
				printf("(nil)");
				break;
			}
			printf("%s", text);
			break;
		} index_main++;
	}
	printf("\n"), va_end(arg_list);
}

