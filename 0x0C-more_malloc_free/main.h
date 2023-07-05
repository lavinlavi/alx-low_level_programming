#ifndef MY_MAIN_H
#define MY_MAIN_H

/**
 * This is the main header file for the program.
 *
 * Filename: main.h
 *
 * Provides a brief description: Main program header
 */
 
// Function to output a character to the standard output
int _putchar(char c);

// Function for memory allocation that verifies successful allocation
void *malloc_checked(unsigned int b);

// Function to concatenate n characters of a string to another string
char *string_nconcat(char *s1, char *s2, unsigned int n);

// Function for allocating memory for an array, with the memory set to zero
void *_calloc(unsigned int nmemb, unsigned int size);

// Function to create an array of integers from min to max
int *array_range(int min, int max);

// Function to reallocate memory block
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif

