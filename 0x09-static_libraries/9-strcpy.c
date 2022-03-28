#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - main
 * @dest : param 1
 * @src : param 2
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
