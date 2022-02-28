#include "main.h"

/**
 * _memset - main proto
 * @s: param1
 * @b: param2
 * @n: param3
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
