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
	unsigned int num = 0;

	do {
		if (*s > '9')
			return (0);
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num);
}

/**
 * main - takes two numbers and multiplies them together.
 *
 * @argc: the number of arguments.
 * @argv: the argument vector.
 *
 * Return:returns 0 to show success
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("%d", sum);
		printf("\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_atoi(argv[i]))
			{
				sum = sum + _atoi(argv[i]);
			}
			else
			{
				printf("Error");
				printf("\n");
				return (1);
			}
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

