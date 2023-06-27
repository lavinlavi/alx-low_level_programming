#include "main.h"
#include <stdio.h>

/**
 * main -the main function of the problem.
 * @argc: the number of the arguments passed into the command line.
 * @argv: the argument vector
 *
 * Return: returns 0 always to show success.
 *
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d", argc - 1);
	printf("\n");

	return (0);
}

