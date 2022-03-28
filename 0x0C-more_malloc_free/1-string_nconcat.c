#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - main function
 * @s1: param 1
 * @s2: param 2
 * @n: param 3
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *s3;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	size = i + n + 1;

	s3 = malloc(sizeof(char) * size);

	if (s3 == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];

	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];

	s3[i + j] = '\0';

	return (s3);
}
