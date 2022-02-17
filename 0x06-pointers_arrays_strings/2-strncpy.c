#include "main.h"
#include <stdio.h>

/**
 * _strcmp - main function
 * @s1: tab param 1
 * @s2: tab param 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
