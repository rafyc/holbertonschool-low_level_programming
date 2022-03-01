#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prototype
 * @c: param1
 * @size: param2
 * Return: str
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(size * sizeof(char));

	if (str == 0)
		return (NULL);
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
