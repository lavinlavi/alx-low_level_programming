#include "main.h"

/**
 * binary_to_uint - a function to convert binary
 * to unsigned int
 * @b: pointer to string of bits.
 * Return: returned the unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tot, pw;
	int siz;

	if (!b)
	{
		return (0);
	}
	siz = 0;
	while (b[siz])
	{
		if (b[siz] != '0' && b[siz] != '1')
			return (0);
		siz++;
	}
	for (pw = 1, tot = 0, siz--; siz >= 0; siz--, pw *= 2)
	{
		if (b[siz] == '1')
		{
			tot += pw;
		}
	}

	return (tot);
}



