#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Generates a replica of a given string using allocated memory
 * @str: The original string that we want to replicate
 * Return: A pointer pointing to the freshly created duplicate string, or NULL in case of any failure
 */

char *_strdup(char *str)
{
	char *prt = NULL;
	int i;
	if(!str)
	{
		return (ptr);
	}
	for (i = 0; str[i] != '/0';  i++)
	{
	}
	ptr = (char *)malloc((i + 1) * sizeofchar());
	
	if(*ptr = NULL)
	{
		return (ptr);
	}
	for (i = 0; str[i] != '/0'; i++)
	{
		ptr[i] = str [i];
	}
	return (ptr);
}

