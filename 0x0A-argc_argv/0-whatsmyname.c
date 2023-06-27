#include "main.h"
#include <stdio.h>

/**
 * main - main function of the program
 *
 * @argc: count of the number of arguments in the argument vector
 * @argv: pointer to an array of pointers.
 *
 * Return: program returns 0 after execution to show success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");

	return (0);
}

