#include <stdlib.h>
#include "main.h"

/**
 * *array_range - generates an array of integers
 * @lowerLimit: lower bound of values stored
 * @upperLimit: upper bound of values stored and total elements
 *
 * Return: pointer to the newly created array
 */
int *array_range(int lowerLimit, int upperLimit)
{
	int *array;
	int idx, arraySize;

	if (lowerLimit > upperLimit)
		return (NULL);

	arraySize = upperLimit - lowerLimit + 1;

	array = malloc(sizeof(int) * arraySize);

	if (array == NULL)
		return (NULL);

	for (idx = 0; lowerLimit <= upperLimit; idx++)
		array[idx] = lowerLimit++;

	return (array);
}

