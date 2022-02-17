#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: The string
 *
 * Return: A pointer to the transformed string
 */
char *cap_string(char *str)
{
	int i;
	int isSpecial = 0;

	for (i = 0; str[i] != 0; i++)
	{

		if (isSpecial == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}

		if (
			str[i] == ' ' ||
			str[i] == '\t' ||
			str[i] == '\n' ||
			str[i] == ',' ||
			str[i] == ';' ||
			str[i] == '.' ||
			str[i] == '!' ||
			str[i] == '?' ||
			str[i] == '"' ||
			str[i] == '(' ||
			str[i] == ')' ||
			str[i] == '{' ||
			str[i] == '}')
			isSpecial = 0;
		else
			isSpecial = 1;
	}

	return (str);
}
