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
	int i;

	for (i = 0; src[i] >= '\0' ; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
