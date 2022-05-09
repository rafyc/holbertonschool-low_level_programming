#include "main.h"
#include <stdio.h>

/**
 * _strspn - main function
 * @s: param 1
 * @accept: param 2
 * Return: k
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (k != i)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			{
				if (s[i] == accept[j])
				k++;
			}
		}
	}
	return (k);
}
