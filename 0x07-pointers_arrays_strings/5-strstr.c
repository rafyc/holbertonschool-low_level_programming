#include "main.h"

/**
 * _strstr - main function
 * @haystack: param1
 * @needle: param2
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
				return (needle);
		}
	}
	return (0);
}
