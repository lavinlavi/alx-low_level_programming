#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int compute_sum(const unsigned int n, ...);
void display_numbers(const char *separator, const unsigned int n, ...);
void display_strings(const char *separator, const unsigned int n, ...);
void display_all(const char * const format, ...);

/**
 * struct print_formats - Defines print formats for various data types
 * @notation: The notation/format specifier
 * @print_func: Pointer to the function that prints the data type based on the notation
 */
typedef struct print_formats
{
	char *notation; /** Format specifier **/
	void (*print_func)(va_list argptr);
} print_formats_t;

void print_char(va_list argptr);
void print_int(va_list argptr);
void print_float(va_list argptr);
void print_string(va_list argptr);

#endif /* ifndef VARIADIC_FUNCTIONS_H */

