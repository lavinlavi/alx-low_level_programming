#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function of the program
 *
 * @argc: number of arguments passed to main
 * @argv: vector of arguments passed to main
 *
 * Return: return 0 if success.
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, x;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = (*get_op_func(argv[2]));

	if (f)
	{
		x = f(a, b);
		if (x == -1)
		{
			printf("Error\n");
			return (100);
		}
		printf("%d\n", x);
		return (0);
	}
	printf("Error\n");
	return (99);
}


