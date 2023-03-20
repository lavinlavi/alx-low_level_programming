#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * This function prints the values of the struct dog
 * pointed to by @d. If a value is NULL or negative,
 * it is printed as "(nil)".
 *
 * Author: Lavin Kituyi
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
