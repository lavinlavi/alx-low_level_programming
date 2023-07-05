#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints details of a dog
 * @d: pointer to struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(unknown)";
	if (d->owner == NULL)
		d->owner = "(unknown)";

	printf("Dog Details:\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

