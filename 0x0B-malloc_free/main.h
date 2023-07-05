#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 *
 * Desc: Main Header File
 */

/* Outputs a character */
int _putchar(char c);

/* Creates an array of chars */
char *create_array(unsigned int size, char c);

/* Duplicates a string */
char *_strdup(char *str);

/* Concatenates two strings */
char *str_concat(char *s1, char *s2);

/* Allocates a two-dimensional grid */
int **alloc_grid(int width, int height);

/* Frees a two-dimensional grid */
void free_grid(int **grid, int height);

/* Converts command line arguments to a string */
char *argstostr(int ac, char **av);

/* Converts a string to an array of words */
char **strtow(char *str);

# endif

