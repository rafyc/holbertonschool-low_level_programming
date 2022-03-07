#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - main proto
 * @d: param1
 * Return:nothing.
 */

void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
