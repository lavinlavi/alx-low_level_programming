#include "variadic_functions.h"

/**
 * print_all - Outputs an assortment of argument types.
 * @format: List of argument types to be handled.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int idx = 0, inner_idx, should_print_comma = 0;
    char *str;
    char arg_types[] = "cifs";

    va_start(args, format);
    while (format != NULL && format[idx])
    {
        inner_idx = 0;
        while (arg_types[inner_idx])
        {
            if (format[idx] == arg_types[inner_idx] && should_print_comma)
            {
                printf(", ");
                break;
            }
            inner_idx++;
        }
        switch (format[idx])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                should_print_comma = 1;
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                should_print_comma = 1;
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                should_print_comma = 1;
                break;
            case 's':
                str = va_arg(args, char *);
                if (str)
                {
                    printf("%s", str);
                    should_print_comma = 1;
                }
                else
                {
                    printf("(nil)");
                    should_print_comma = 1;
                }
                break;
        }
        idx++;
    }
    printf("\n");
    va_end(args);
}

