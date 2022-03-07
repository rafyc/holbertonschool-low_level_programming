#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - main proto
 * @d: name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
