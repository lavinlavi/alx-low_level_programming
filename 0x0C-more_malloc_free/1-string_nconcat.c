#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - appends n characters from one string to another
 * @s1: target string for appending
 * @s2: source string
 * @n: count of characters from s2 to append to s1
 *
 * Return: pointer to the updated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int idx = 0, subIdx = 0, lenTarget = 0, lenSource = 0;

	while (s1 && s1[lenTarget])
		lenTarget++;
	while (s2 && s2[lenSource])
		lenSource++;

	if (n < lenSource)
		newStr = malloc(sizeof(char) * (lenTarget + n + 1));
	else
		newStr = malloc(sizeof(char) * (lenTarget + lenSource + 1));

	if (!newStr)
		return (NULL);

	while (idx < lenTarget)
	{
		newStr[idx] = s1[idx];
		idx++;
	}

	while (n < lenSource && idx < (lenTarget + n))
		newStr[idx++] = s2[subIdx++];

	while (n >= lenSource && idx < (lenTarget + lenSource))
		newStr[idx++] = s2[subIdx++];

	newStr[idx] = '\0';

	return (newStr);
}

