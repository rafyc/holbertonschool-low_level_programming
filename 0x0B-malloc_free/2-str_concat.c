#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - main prototype
 * s1: param1
 * s2: param2
 * Return: str
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int size;
	char *s3;

	for (i = 0; s1[i] != '\0'; i++);
	for (j = 0; s2[j] != '\0'; j++);
	size = i + j;
	s3 = malloc(size * sizeof(char));

	for(i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for(j = 0; s2[j] != '\0'; j++)
		s3[i + j] = s2[j];
	return (s3);
}
