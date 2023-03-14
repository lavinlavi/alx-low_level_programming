#include "main.h"
#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 *
 * @s: input string
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 * Return: the int converted from the string
 */

int  _atoi(char *s)
int _atoi(char *s)
{
	int sign, result, index;
	int i, d, n, len, f, digit;

	result = 0;
	sign = 0;
	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	for (index = 0; s[index] != '\0'; index++)
	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[index] == '-')
		{
			sign++;
		}
		if (s[index] > 47 && s[index] < 58)
		{
			while (s[index] > 47 && s[index] < 58)
		if (s[i] == '-')
			++d;

				result = result * 10 - (s[index++] - 48);
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	return (result *= sign % 2 == 0 ? -1 : 1);

	if (f == 0)
		return (0);

	return (n);
}
