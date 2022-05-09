#include "main.h"
#include <stdio.h>
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

	if (haystack == NULL)
	{
		return (0);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' &&  haystack[i + j] == needle[j])
			{
				j++;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		else
			i++;
	}
	return (0);
}
