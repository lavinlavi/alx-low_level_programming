#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Allocates a two-dimensional array of integers
 * @width: Width of the 2D array
 * @height: Height of the 2D array
 * Return: Pointer to the newly allocated 2D array or NULL if unsuccessful
 */
int **alloc_grid(int width, int height)
{
	int **twoDArray;
	int rowCount, columnCount;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDArray = malloc(height * sizeof(int *));
	if (twoDArray == NULL)
		return (NULL);

	for (rowCount = 0; rowCount < height; rowCount++)
	{
		twoDArray[rowCount] = malloc(width * sizeof(int));
		if (twoDArray[rowCount] == NULL)
		{
			while (rowCount >= 0)
				free(twoDArray[rowCount--]);
			free(twoDArray);
			return (NULL);
		}

		for (columnCount = 0; columnCount < width; columnCount++)
			twoDArray[rowCount][columnCount] = 0;
	}

	return (twoDArray);
}

