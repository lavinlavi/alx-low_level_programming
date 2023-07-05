#include "main.h"
#include "stdlib.h"

/**
 * _strdup - Main Entry Point
 * @sourceStr: string to be duplicated
 * Return: duplicated string or null
 */
char *_strdup(char *sourceStr)
{
	char *copyStr;
	unsigned int length, index;

	/* validate if sourceStr is null */
	if (sourceStr == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (sourceStr[length] != '\0')
	{
		length++;
	}

	copyStr = malloc(sizeof(char) * (length + 1));

	/*validate if malloc has allocated memory successfully*/
	if (copyStr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < length; index++)
	{
		copyStr[index] = sourceStr[index];
	}
	copyStr[length] = '\0';
	return (copyStr);
}

