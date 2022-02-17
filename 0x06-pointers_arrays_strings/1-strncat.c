#include "main.h"
#include <stdio.h>

/**
 * _strcat - main proto
 * @dest: param1
 * @src : param2
 * @n : param 3 n bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if(src[j] == '\0')
		break;
	}
	return (dest);
}
