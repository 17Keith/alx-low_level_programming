#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Represents the name of the dog, age, and the owner.
 * @name: is the name of the dog as a string value.
 * @age: is age of the dog as a float.
 * @owner: name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
