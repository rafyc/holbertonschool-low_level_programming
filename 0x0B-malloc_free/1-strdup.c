#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main prototype
 * @str: string
 * Return: str
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *cpy;

	if (str == 0)
		return (NULL);

	while (str[i] <= '\0')
	{
		i++;
	}

	cpy = malloc(i * sizeof(char));

	if (cpy == 0)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		cpy[j] = str[j];
	}

	return (cpy);
}
