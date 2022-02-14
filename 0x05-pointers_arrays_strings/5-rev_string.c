#include "main.h"
/**
 * rev_string - fonction
 * Return: rien
 * @s: param
 */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int k;

	while (s[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
