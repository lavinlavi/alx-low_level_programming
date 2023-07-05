#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Combines two strings into one
 * @s1: First input string
 * @s2: Second input string
 * Return: Pointer to the newly created string or NULL if unsuccessful
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int lengthS1 = 0, lengthS2 = 0;
	char *temp, *combinedString;

	temp = s1;
	if (s1)
		while (*temp++)
			lengthS1++;
	else
		s1 = "";

	temp = s2;
	if (s2)
		while (*temp++)
			lengthS2++;
	else
		s2 = "";

	combinedString = malloc(lengthS1 + lengthS2 + 1);
	if (!combinedString)
		return (NULL);

	temp = combinedString;
	while (*s1)
		*temp++ = *s1++;
	while (*s2)
		*temp++ = *s2++;
	*temp = 0;

	return (combinedString);
}

