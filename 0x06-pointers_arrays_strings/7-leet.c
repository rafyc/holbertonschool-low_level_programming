#include "main.h"

/**
 * leet - main function
 * @s: param1
 * Return: Always 0
 */

char *leet(char *s)
{
	int i;
	int j;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'A', 'E', 'O', 'T', 'L'};
	char c[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0 ; j <= 4;  j++)
		{
			if (s[i] == a[j] || s[i] == b[j])
			{
				s[i] = c[j];
			}
		}
	}
return (s);

}
