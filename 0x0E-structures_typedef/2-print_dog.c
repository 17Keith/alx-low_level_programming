#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints a struct dog
 * @d: pointer to a struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("NAME: %s\n", (d->name == NULL) ? "(nil)" : (d->name));
	printf("AGE: %6f\n", d->age);
	printf("OWNER: %s\n", (d->name == NULL) ? "(nil)" : (d->owner));
}
