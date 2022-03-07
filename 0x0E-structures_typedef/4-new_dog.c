#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - main proto
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of thr dog
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i;
	int j;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(dog_t));

	if (ptr  == 0 || name == 0 || owner == 0)
	{
		return (NULL);
	}

	ptr->name = malloc(sizeof(char) * (i + 1));
	ptr->owner = malloc(sizeof(char) * (j + 1));

	if (ptr->name == 0 || ptr->owner == 0)
	{
		free(ptr);
		free(ptr->name);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		ptr->owner[j] = owner[j];
	ptr->owner[j] = '\0';
	return (ptr);
}
