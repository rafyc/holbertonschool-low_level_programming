#include "main.h"
#include <stdio.h>

/**
 * string_troupper - check the code
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
		s[i] -= 32;
		}
	}
	return (s);
}
