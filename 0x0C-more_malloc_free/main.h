#ifndef MAIN_H
#define MAIN_H
/**
 * File: main
 *
 * Desc: Central header file
 */
int _putchar(char c);  // Prints a single character
void *malloc_checked(unsigned int b);  // Allocates memory and checks for successful allocation
char *string_nconcat(char *s1, char *s2, unsigned int n);  // Concatenates n characters from string s2 to string s1
void *_calloc(unsigned int nmemb, unsigned int size);  // Allocates zero-initialized memory for nmemb elements of size bytes each
int *array_range(int min, int max);  // Creates an array of integers from min to max
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);  // Resizes the memory block pointed to by ptr from old_size to new_size

#endif

