#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of struct dog
 * @d: address of a struct dog
 * @name: name of dog
 * @age: age of the dog as float
 * @owner: name of the dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
