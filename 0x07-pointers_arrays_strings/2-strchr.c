#include "main.h"

/**
 * _strchr - main function
 * @s: param1
 * @c: param2
 * Return: c, s, null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (c == 0)
		{
			return (0);
		}
	}
	return (0);
}
