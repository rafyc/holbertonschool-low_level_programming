#include "main.h"

/**
 * _strlen - main proto
 * @s: param
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}
