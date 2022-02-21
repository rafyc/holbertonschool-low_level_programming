#include "main.h"

/**
 * _strpbrk - main function
 * @s: param1
 * @accept: param2
 * Return: param
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
