#include "main.h"

/**
 * wildcmp - checks whether two strings are identical
 *
 * @s1: the pointer to the first string.
 * @s2:h the pointer to the second string.
 *
 * Return: the function returns 1 if identical and 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	
	}
	if(*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
				if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
