#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - main
 * @*dest : param 1
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
