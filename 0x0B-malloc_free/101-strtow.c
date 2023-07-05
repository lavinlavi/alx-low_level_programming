#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - Frees a grid of strings
 * @grid: The grid to free
 * @height: The height of the grid
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits a string into an array of words
 * @str: The input string
 * Return: Pointer to the array of words, or NULL if unsuccessful
 */
char **strtow(char *str)
{
	char **wordArray;
	unsigned int charIndex, wordCount, wordIndex, arrayIndex;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (charIndex = wordCount = 0; str[charIndex] != '\0'; charIndex++)
	{
		if (str[charIndex] != ' ' && (str[charIndex + 1] == ' ' || str[charIndex + 1] == '\0'))
			wordCount++;
	}

	wordArray = malloc((wordCount + 1) * sizeof(char *));
	if (wordArray == NULL || wordCount == 0)
	{
		free(wordArray);
		return (NULL);
	}

	for (wordIndex = arrayIndex = 0; wordIndex < wordCount; wordIndex++)
	{
		for (charIndex = arrayIndex; str[charIndex] != '\0'; charIndex++)
		{
			if (str[charIndex] == ' ')
				arrayIndex++;
			if (str[charIndex] != ' ' && (str[charIndex + 1] == ' ' || str[charIndex + 1] == '\0'))
			{
				wordArray[wordIndex] = malloc((charIndex - arrayIndex + 2) * sizeof(char));
				if (wordArray[wordIndex] == NULL)
				{
					ch_free_grid(wordArray, wordIndex);
					return (NULL);
				}
				break;
			}
		}

		for (charIndex = 0; arrayIndex <= charIndex; arrayIndex++, charIndex++)
			wordArray[wordIndex][charIndex] = str[arrayIndex];
		wordArray[wordIndex][charIndex] = '\0';
	}

	wordArray[wordIndex] = NULL;
	return (wordArray);
}

