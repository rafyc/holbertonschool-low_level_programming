#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prototype
 * @char: param1
 * @size: param2
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
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
	return(str);
}
