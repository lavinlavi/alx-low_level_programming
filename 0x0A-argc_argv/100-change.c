#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *@s: the string to be converted.
 *
 * Return: the integer value of the converted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * main - determines the number of coins to give back.
 *
 * @argc: the number of arguments.
 * @argv: the argument vector.
 *
 * Return:returns 0 to show success
 */

int main(int argc, char **argv)
{
	int count = 0;
	int arg_1 = _atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (arg_1 < 0)
	{
		printf("%d\n", count);
		return (0);
	}
	if (arg_1 >= 25)
	{
		count = count + (arg_1 - arg_1 % 25) / 25;
		arg_1 = arg_1 % 25;
	}
	if (arg_1 >= 10)
	{
		count = count + (arg_1 - arg_1 % 10) / 10;
		arg_1 = arg_1 % 10;
	}
	if (arg_1 >= 5)
	{
		count = count + (arg_1 - arg_1 % 5) / 5;
		arg_1 = arg_1 % 5;
	}
	if (arg_1 >= 2)
	{
		count = count + (arg_1 - arg_1 % 2) / 2;
		arg_1 = arg_1 % 2;
	}
	if (arg_1 >= 1)
	{
		count = count + (arg_1 - arg_1 % 1) / 1;
		arg_1 = arg_1 % 1;
	}
	printf("%d\n", count);
	return (0);
}

