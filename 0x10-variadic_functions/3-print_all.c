#include "variadic_functions.h"

/**
 * display_all - Show any datatype.
 * @format: The list of datatypes passed to this function.
 *
 * No return value.
 */

void print_all(const char * const format, ...);
{
    va_list args;
    int count = 0;
    const char *types = "cifs";
    
    va_start(args, format);
    char *output_str;
    for (const char* itr = format; *itr != '\0'; ++itr)
    {
        for (int j = 0; types[j] != '\0'; ++j)
        {
            if (*itr == types[j] && count > 0)
            {
                printf(", ");
            }
        }
        count = 1;
        switch (*itr)
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                output_str = va_arg(args, char *);
                printf("%s", output_str ? output_str : "(nil)");
                break;
        }
    }
    printf("\n");
    va_end(args);
}


