#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Combines arguments into a single string with newline separators
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: Pointer to the new string, or NULL if there was an error
 */
char *argstostr(int ac, char **av)
{
	int argNum, charNum, strIndex = 0, strLength = 0;
	char *newStr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argNum = 0; argNum < ac; argNum++)
	{
		for (charNum = 0; av[argNum][charNum]; charNum++)
			strLength++;
	}
	strLength += ac;

	newStr = malloc(sizeof(char) * strLength + 1);
	if (newStr == NULL)
		return (NULL);

	for (argNum = 0; argNum < ac; argNum++)
	{
		for (charNum = 0; av[argNum][charNum]; charNum++)
		{
			newStr[strIndex] = av[argNum][charNum];
			strIndex++;
		}
		if (newStr[strIndex] == '\0')
		{
			newStr[strIndex++] = '\n';
		}
	}
	return (newStr);
}

