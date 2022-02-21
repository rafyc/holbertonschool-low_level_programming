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

	while (needle[j] != '\0')
	{
		j++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
