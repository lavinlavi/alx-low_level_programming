#include "main.h"
#include <stdio.h>

/**
 * main - the main function of the program.
 *
 * @argc: the numbers of arguments in the argument vector.
 * @argv: the agrument vector with all the commandline arguments.
 *
 * Return: always returns 0 for success.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

