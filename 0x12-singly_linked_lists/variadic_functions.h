#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_

#include <stdarg.h>
#include <stdio.h>

int compute_sum(const unsigned int n, ...);
void display_numbers(const char *separator, const unsigned int n, ...);
void display_strings(const char *separator, const unsigned int n, ...);
void display_all(const char * const format, ...);

#endif

