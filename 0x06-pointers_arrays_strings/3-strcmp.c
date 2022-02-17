#include "main.h"
/**
 * _strcmp - fonction
 * @s1: param
 * @s2: param
 * Return: 0 ou n
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	return (s1[i] - s2[i]);
}
