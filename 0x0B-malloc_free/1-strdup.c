#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates an input string
 * @str: original string
 * Return: pointer to the newly created string or NULL on failure
 */
char *_strdup(char *str)
{
	char *duplicateStr;
	unsigned int strLength, index;

	/* verify if str is null */
	if (str == NULL)
	{
		return (NULL);
	}

	strLength = 0;
	while (str[strLength] != '\0')
	{
		strLength++;
	}

	duplicateStr = malloc(sizeof(char) * (strLength + 1));

	/*validate if memory allocation was successful*/
	if (duplicateStr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < strLength; index++)
	{
		duplicateStr[index] = str[index];
	}
	duplicateStr[strLength] = '\0';
	return (duplicateStr);
}

